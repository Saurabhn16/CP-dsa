vector<int> PrevElement(vector<int> &arr, int n)
{
    stack<int> s;
    int j = -1;

      s.push(j);
      vector<int> k;
    //    k.push_back(n+1);
    for (int i = n - 1; i >= 0; i--)
    {
         
       

        
        {
            while (s.top() >= arr[i]&&s.top()!=-1)
            {
                s.pop();
               
            }
            prev[i]=s.top();
            s.push(i);
        }
    }
    // reverse(k.begin(), k.end());
    return k;
}
vector<int> nextElement(vector<int> &arr, int n)
{
    stack<int> s;
    int j = -1;
  
    s.push(j);
    vector<int> k;
    k.push_back(0);
    for (int i = 0; i < n; i++)
    {
 int  z=i;
        if (s.top() > arr[i])
        {
            k.push_back(s.top());
            s.push(z);
        }

        else
        {
            while (s.top() >= arr[i])
            {
                s.pop();
                z--;
            }
            int m = s.top();
            k.push_back(m);
            s.push(z);
        }
    }
 
     reverse(k.begin(), k.end());
    return k;
}
class Solution
{
public:
    int largestRectangleArea(vector<int> &heights)
    {
        int n = heights.size();
        vector<int> next(n+1);
        next = nextElement(heights, n);
        vector<int> prev(n);
        prev = PrevElement(heights, n);
        int max=-1;
        for (int  i = 0; i < n; i++)
        { 
             if (next[i]==-1)
             {
                next[i]=n;
             }
             if (prev[i] ==-1)
             {
                prev[i]=0;
             }
             
             
             int k =abs((next[i]-prev[i] -1)*heights[i]);

             if (max<k)
             {
                max=k;
             }
             
        }
         return max; 
    }
  
    
};
