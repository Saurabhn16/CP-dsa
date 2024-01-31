import threading
import time

# define semaphore to synchronize thread operations
semaphore = threading.Semaphore(1)

def mergeSort(ARRAY):
    if len(ARRAY) <= 1:
        return ARRAY
    mid = len(ARRAY) // 2
    left = mergeSort(ARRAY[:mid])
    right = mergeSort(ARRAY[mid:])
    return merge(left, right)

def merge(left, right):
    Ans = []
    i = j = 0
    while i < len(left) and j < len(right):
        if left[i] < right[j]:
            Ans.append(left[i])
            i += 1
        else:
            Ans.append(right[j])
            j += 1
    Ans += left[i:]
    Ans += right[j:]
    return Ans

def sortPart(part):
    sorted_part = mergeSort(part)
    semaphore.acquire()
    try:
        Fans.extend(sorted_part)
    finally:
        semaphore.release()

def concSort(ARRAY, Nthreads):
    global Fans
    Fans = []

    arr_parts = [ARRAY[i:i+Nthreads] for i in range(0, len(ARRAY), Nthreads)]
    threads = []
    x = 0
    if len(ARRAY)%Nthreads == 0:
        x = int(len(ARRAY)/Nthreads)
    else:
        x = int(len(ARRAY)/Nthreads) + 1
    for i in range(0, x):
        thread = threading.Thread(target=sortPart, args=(arr_parts[i],))
        threads.append(thread)
        thread.start()

    for thread in threads:
        thread.join()

    return mergeSort(Fans)


ARRAY = []
y = int(input("Enter no of Number  AND   Number you want to sort  : "))
item = 0
for i in range(y):
    item = int(input())
    ARRAY.append(item)
Nthreads = int(input("Enter  no of threads: "))
cnt = 0
if len(ARRAY) < Nthreads**2 :
        while len(ARRAY)<Nthreads**2:
            ARRAY.append(0)
            cnt = cnt + 1

finalA = concSort(ARRAY, Nthreads)
print("Sorted list: ")
i = cnt
for i in range(cnt, len(finalA)):
    print(finalA[i])