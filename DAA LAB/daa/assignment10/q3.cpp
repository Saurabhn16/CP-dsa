#include <bits/stdc++.h>
using namespace std;
int solve(string s1,string s2){
    int m = s1.size(),n = s2.size(),i,j;
        vector<int> pre(n+1,0),cur(n+1,0);
        for(i = 1; i <= m; i++){
            for(j = 1; j <= n; j++){
                if(s1[i-1]==s2[j-1]){
                    cur[j] = pre[j-1]+1;
                }else{
                    cur[j] = max(pre[j],cur[j-1]);
                }
            }
            pre = cur;
        }
        return cur[n];
}

int main() {
	// your code goes here
	string s1,s2;
    cin>>s1>>s2;
    int ans=solve(s1,s2);
    cout<<ans<<endl;
	return 0;
}

//time complexity--> O(n*m)