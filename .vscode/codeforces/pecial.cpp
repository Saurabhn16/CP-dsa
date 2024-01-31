
#include <bits/stdc++.h>
using namespace std;
 
int   countElements(long long  a[], long long  n)
{
 
    long long  ct = 0;
 
    for (long long  i = 0; i < n; i++) {
        long long  sum = a[i];
        bool flag = false;
 
        for (long long  j = 0; j < i; j++) {
            long long  Ns = 0;
            for (long long  k = j; k < i; k++) {
                Ns += a[k];
                if ((k - j + 1) >= 2 && Ns == sum) {
                    flag = true;
                    ct++;
                    break;
                }
            }
            if (flag)
                break;
        }
 
        for (long long  j = i + 1; j < n && flag == false; j++) {
            long long  Ns = 0;
            for (long long  k = j; k < n; k++) {
                Ns += a[k];
                if ((k - j + 1) >= 2 && Ns == sum) {
                    flag = true;
                    ct++;
                    break;
                }
            }
            if (flag)
                break;
        }
    }
 
    return ct;
}
 

int   main()
{
 int t ;
 cin>>t;
 while(t--){
    long long N;
    cin>>N;
    long long a[N];
    for (int  i = 0; i < N; i++)
    {
        cin>>a[i];
    }
    
    cout << countElements(a, N)<<endl;}
}
