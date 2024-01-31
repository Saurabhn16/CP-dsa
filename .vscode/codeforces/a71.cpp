#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
     
    while (t--)
    { 
int a ,  b,c;
cin>>c>>a>>b;
string k;
cin>>k;
int a1=0,b1=0,c1=0;
int totoal=0;
for(int i=0;i<k.size();i++)
{ if(k[i]=='A'){
  a1++;
}if(k[i]=='B'){
  b1++;
}if(k[i]=='c'){
  c1++;
}

}
{if(a1>a){
  total+=a;
}
else {
  total+=a1;
}}{
if(b1>b){
  total+=b;
}
else {
  total+=a1;
}}


{
  if (c1< c-(total))
  { total+=c1;}
  else { int l=c-(total);
    total += l;
  }
}

 
        cout << endl;
    }
}