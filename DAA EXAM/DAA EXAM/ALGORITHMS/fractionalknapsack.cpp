#include<bits/stdc++.h>
using namespace std;
int main() {

float n,x,y;
cin>>n;
int ct;
long long int profit=0;
cin>>ct;
vector<pair<float,float>>vp;
for(int i=0; i<n; i++)
{
    cin>>x>>y;
    vp.push_back({y/x,x});
}

sort(vp.begin(), vp.end());// sorting to get the optimum  (greedy)

reverse(vp.begin(),vp.end());

for(int i=0; i<n; i++){
    if(vp[i].second>ct){
        profit+= ct*vp[i].first;
        ct=0;
        break;
    }
    else{
        profit+=vp[i].second* vp[i].first;
        ct-=vp[i].second;
    }
}
cout<<"Maxinmum Profit"<<profit<<endl;
return 0;

}
