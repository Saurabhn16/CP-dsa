vector<int> solve(vector<int> A)
{
    int rt = 0;
    int ft = 0;

    int n = A.size();

    for (int i = 0; i < n; i++)
    {

        int ct = abs(A[i]) - 1;
        if (A[ct] < 0)
        {
            rt = ct + 1;
        }
        else
        {
            A[ct] *= -1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (A[i] > 0)
        {
            ft = i + 1;
        }
    }

    return {rt, ft};
}
#include <bits/stdc++.h>

pair<int, int> missingAndRepeating(vector<int> &a, int n)
{
 int xr = 0;

    //Step 1: Find XOR of all elements:
    for (int i = 0; i < n; i++) {
        xr = xr ^ a[i];
        xr = xr ^ (i + 1);
    }

    //Step 2: Find the differentiating bit number:
    int number = (xr & ~(xr - 1));

    //Step 3: Group the numbers:
    int zero = 0;
    int one = 0;
    for (int i = 0; i < n; i++) {
        //part of 1 group:
        if ((a[i] & number) != 0) {
            one = one ^ a[i];
        }
        //part of 0 group:
        else {
            zero = zero ^ a[i];
        }
    }

    for (int i = 1; i <= n; i++) {
        //part of 1 group:
        if ((i & number) != 0) {
            one = one ^ i;
        }
        //part of 0 group:
        else {
            zero = zero ^ i;
        }
    }

    // Last step: Identify the numbers:
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == zero) cnt++;
    }

    if (cnt == 2) return {one ,zero};
    return {zero,one};
}