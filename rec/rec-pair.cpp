#include <iostream>
using namespace std;
int counttiling(int n)
{
    if (n == 1 || n == 0 || n == 2)
    {
        return n;

    }
    return counttiling(n - 2) * (n - 1) + counttiling(n - 1);
}
int main()
{
    cout << counttiling(4);

    return 0;
}