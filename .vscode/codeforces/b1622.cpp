#include <bits/stdc++.h>
using namespace std;
#define int long long
void transform(vector<int> &input)
{
    // construct a priority queue of pairs
    priority_queue<pair<int, int>> maxHeap;

    // push all input elements with their corresponding index in the priority queue
    for (size_t i = 0; i < input.size(); i++)
    {
        maxHeap.push({input[i], i});
    }

    // get input size
    int rank = input.size();

    // run until max-heap is empty
    while (!maxHeap.empty())
    {
        // take the next maximum element from the heap and replace its value
        // in the input vector with its corresponding rank
        input[maxHeap.top().second] = rank;
        maxHeap.pop();

        // decrement rank for the next maximum element
        --rank;
    }
}
signed main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        vector<int> a;
        vector<int> b;
        vector<int> c;
        map<int, int> m;
  
        for (int i = 0; i < n; i++)
        {
            int l;
            cin >> l;
            b.push_back(l);
            c.push_back(l);
            a.push_back(l);
        }
        sort(b.begin(), b.end());

        transform(b);
        transform(a);
        //    for (int  i = 0; i < b.size(); i++)
        //    {
        //    cout<< b[i]<<" ";
        //    }
        //    cout<<endl;

        int ct = 0;
        int xy = 1;

        for (int i = 0; i < n; i++)
        {

            if (ct % 2 == 0)
            {
                m.insert({b[n - 1 - i], xy});
            }
            if (ct % 2 != 0)
            {

                m.insert({b[n - 1 - i], -xy});
                xy++;
            }

            ct++;
        }
       
 int sum=0;
        for (int i = 0; i < n; i++)
        { int x= m.at(a[i]);
          int l=abs(x)*2*c[i];
          sum+=l;
            // cout << m.at(a[i]) << " ";
        }
        cout<<sum<<endl;
         cout << 0 << " ";
           for (int i = 0; i < n; i++)
     { int x= m.at(a[i]);
        //   int l=abs(x)*2*c[i];
        //   sum+=l;
            cout << m.at(a[i]) << " ";
        }
        cout << endl;

    }
    return 0;
}
