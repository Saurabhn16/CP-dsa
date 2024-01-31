import os
import sys


def seledct(A):
    n = len(A)
    for i in range(n):
        minD = i
        for j in range(i+1, n):
            if A[j] < A[minD]:
                minD = j
        A[i], A[minD] = A[minD], A[i]
    return A

def Bubble(A):
    n = len(A)
    for i in range(n):
        for j in range(0, n-i-1):
            if A[j] > A[j+1]:
                A[j], A[j+1] = A[j+1], A[j]
    return A

if __name__ == '__main__':
    A = list(map(int, input("Enter THE INTEGER YOU WANT TO SORT ").split()))
    n = len(A)
    pid = os.fork()
    
    if pid == 0: # child process
      print("child process",os.getpid())
        sort = Bubble(A)
        print("CHILD PROCESS SORTED THE ARRAY OF INTEGERS WITH BUBBEL SORT IN THIS MANNER", sort)
    else: # parent process
    print("parent  process",os.getpid())
        sort = seledct(A)
        print("PARENT PROCESS THE SORTED ARRAY OF INTEGERS  with SELECTION  IN THIS MANNER", sort)
        os.wait()
