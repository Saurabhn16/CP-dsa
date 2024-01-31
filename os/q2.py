import threading
import time
import random

PHILOSHOPHERS = 9
ct_cycle = 10


forks = [threading.Semaphore(1) for _ in range(PHILOSHOPHERS)]
print_mutex = threading.Semaphore(1)

def philosopher(ID):
    for i in range(ct_cycle):
        print_message(ID, ":-Thinking")
        time.sleep(random.uniform(1, 3))

        print_message(ID, ":-Hungry")
        forks[ID].acquire()  
        forks[(ID+1) % PHILOSHOPHERS].acquire()  
        print_message(ID, ":-Eating")
        time.sleep(random.uniform(1, 3))
        forks[ID].release() 
        forks[(ID+1) % PHILOSHOPHERS].release()  

def print_message(ID, msg):
    print_mutex.acquire()
    try:
        print("Philosopher", ID, msg)
    finally:
        print_mutex.release()


philosophers = []
for i in range(PHILOSHOPHERS):
    thread = threading.Thread(target=philosopher, args=(i,))
    philosophers.append(thread)
    thread.start()

for thread in philosophers:
    thread.join()