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
bool palindrom(string s, int i) {
  if (i >= s.size() - 1 - i) {
    return true;
  }

  if (s[i] == s[s.size() - 1 - i]) {

  //  cout<<s[i]<<" "<<s[s.size() - 1 - i]<<endl;
    return palindrom(s, i+1);
  }
  else {
    return false;
  }   
}
bool checkPalindrome(long long N) {
  string s = intToBinary(N);
  //  cout<<s<<endl;
  int i = 0;
  return palindrom(s, i);
}