import os
import sys

def selectionsort(A):
    n = len(A)
    for i in range(n):
        dmin = i
        for j in range(i+1, n):
            if A[j] < A[dmin]:
                dmin = j
        A[i], A[dmin] = A[dmin], A[i]
    return A

def bubblesort(A):
    n = len(A)
    for i in range(n):
        for j in range(0, n-i-1):
            if A[j] > A[j+1]:
                A[j], A[j+1] = A[j+1], A[j]
    return A

if __name__ == '__main__':
    A = list(map(int, input("Enter integers to be sorted: ").split()))
    n = len(A)
    pid = os.fork()
    
    if pid == 0: # child process
        print("Child Process:",os.getpid())
        print("CHILD PROCESS SORTED THE NUMBERS THIS WAY")
        sorted_arr = bubblesort(A)
        print("THE SORTED WAY:", sorted_arr)
    else: # parent process
        print("Parent Process:",os.getpid())
        print("PARENT PROCESS SORTED THE NUMBERS THIS WAY")
        sorted_arr = selectionsort(A)
        print("THE SORTED ARRAY:", sorted_arr)
        os.wait()
