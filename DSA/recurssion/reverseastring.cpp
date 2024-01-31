#include <bits/stdc++.h>
 using namespace std;


string reverseString(string str)
{  
	for(int i=0;i<str.size()/2;i++){
		 swap(str[i],str[str.size()-1-i]);
	}
	 return str ;
}
 int main(){
     string st;
     cin>>st;
    string s= reverseString(st);
     cout<<s;
     return 0;
 }