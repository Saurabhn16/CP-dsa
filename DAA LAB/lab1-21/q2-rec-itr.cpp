/
#include <iostream>
using namespace std;

int recFunc(int n)
{
    if (n <= 1)
        return n;
    return recFunc(n - 1) + recFunc(n - 2);
}

int itrFun(int n)
{
    int fib[n + 2];
    int i;
    fib[0] = 0;
    fib[1] = 1;
    for (i = 2; i <= n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    return fib[n];
}

int main()
{
    int n;
    cin>>n;
    cout << recFunc(n)<<endl;
    cout<<itrFun(n);
    return 0;
}