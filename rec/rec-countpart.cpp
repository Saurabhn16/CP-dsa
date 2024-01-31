#include <iostream>
using namespace std;
int countPath(int s, int e)
{
    int count = 0;
    if (s == e)
    {
        return 1;
    }
    if (s > e)
    {
        return 0;
    }
    for (int i = 1; i < 6; i++)
    {
        count += countPath(s + i, e);
    }
    return count;

}
int main()
{
    cout << countPath(0, 20);

    return 0;
}