#include <cpp>
#include <iostream>
using namespace std;
int main()
{
    // Job scheduling with deadline
    let count = 0;
    let jobName = {"J1", "J2", "J3", "J4", "J5"},
        deadline = {2, 1, 2, 1, 3},
        profit = {50, 20, 30, 25, 15},
        index = profit.index(-1),
        job;
    cout << "Enter no of Jobs\n";
    int n;
    cin >> n;
    cout << "Enter no of Deadlines\n";
    int m;
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        jobName[i] = i + 1;
    }
    int k = m / 5;
    deadline = random(m, m);
    profit = random(n, 1000);
    index = profit.index(-1);  
       $$(   
              $(l){
        deadline | $(x)
        {
            while (len(l) < x)
                l += -1;
        };             },        
         $(l) {
        _ i = --index;
        for (_ y = deadline[i] - 1; y >= 0; --y)
        {
            if (l[y] == -1)
            {
                count = count + 1;
                l[y] = i;
                break;
            }
        }}
}