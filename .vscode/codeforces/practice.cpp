#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       long long int x1;
       cin>>x1;
       long long int p1;
       cin>>p1;
       long long int x2;
       cin>>x2;
       long long int p2;
       cin>>p2;
       long long int u=pow(10,p1);
       long long int p=pow(10,p2);
       long long int num1 = x1*u;
       long long int num2 = x2*p;
       cout<<u<<p<<endl;
       cout<<num1<<num2;
       cout<<pow(10,2);
       if(num1==num2){
        cout<<"="<<endl;
       }
       else if(num1<num2){
         cout<<"<"<<endl;
       }
       else{
         cout<<">"<<endl;
       }
    }
     
}
