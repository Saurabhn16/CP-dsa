#include <bits/stdc++.h> 
string intToBinary(long long num) {
  string binary;

  if (num == 0) {
    return "0";
  }

  while (num > 0) {
    int rem = num % 2;
    binary = to_string(rem) + binary;
    num /= 2;
  }

  return binary;
}

bool fun(string str,long long int st,long long int l){

	if(st>=l-1-st){
		return true;
	}

	if(str[st]==str[l-1-st]){
		st++;
		return fun(str,st,l);
	}
	else{
		return false;
	}
}

bool checkPalindrome(long long N)
{
	
	
	string str = intToBinary(N);
	long long int h=str.size();

		return fun(str,0,h);


}