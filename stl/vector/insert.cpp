#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> v = {1, 2, 3, 4, 5};
for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;
  // Adding elements
  v.push_back(6);
  for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;
  v.insert(v.begin() + 2, 7);
for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;
  // Removing elements
  v.pop_back();
  for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;
  v.erase(v.begin() + 3);
  for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;
}
