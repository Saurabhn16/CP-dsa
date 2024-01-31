#include<bits/stdc++.h>
using namespace std;
 int  main(){ 
    long long  t;
    cin>>t;
    while(t--){
       long long  x1;
       cin>>x1;
       long long  p1;
       cin>>p1;
       long long  x2;
       cin>>x2;
       long long  p2;
       cin>>p2;
    //    cout<<x1*pow(10,p1)<<endl;
    //    cout<<x2*pow(10,p2)<<endl;
      if (p1 == p2)
        {
            if (x1> x2)
            {
                cout << ">" << endl;
            }
            if (x1 < x2)
            {
                cout <<"<" << endl;
            }
            if (x1 == x2)
            {
                cout <<"=" << endl;
            }
        }
else
    {if((x2*pow(10,p2))==(x1*pow(10,p1)) ){
        cout<<"="<<endl;
    }
    else if((x1*pow(10,p1))<(x2*pow(10,p2))){
      cout<<"<"<<endl;
    }
    else if((x1*pow(10,p1))>(x2*pow(10,p2))){
      cout<<">"<<endl;
    }
}}
     
}
