#include <iostream>
using namespace std;
int counttiling(int n)
{
    if (n == 1)
    {
        return 1;
    }
    if (n==0 )
    {
        return 0;
    }
    return counttiling(n-2)+counttiling(n-1);

    
}
int main()
{
   cout<< counttiling(4);

    return 0;
}