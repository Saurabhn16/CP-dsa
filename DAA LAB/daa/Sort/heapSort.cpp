#include <bits/stdc++.h>
using namespace std;
void heapify(vector<int>& nums,int n,int i){
        int l=i;
        int left=(2*i)+1;
        int right=(2*i)+2;
        if(left<n&&nums[left]>nums[l]){
            l=left;
        }
        if(right<n&&nums[right]>nums[l]){
            l=right;
        }
        if(l!=i){
            swap(nums[l],nums[i]);
            heapify(nums,n,l);
        }
}
void heapSort(vector<int>& nums,int n){
    for(int i=n/2-1;i>=0;i--){
        heapify(nums,n,i);
    }
    for(int i=n-1;i>=0;i--){
        swap(nums[0],nums[i]);
        heapify(nums,i,0);
    }
}

vector<int> sortArray(vector<int>& nums) {
    int n=nums.size();
    heapSort(nums,n);
    return nums;
}
void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>ans;
    ans=sortArray(v);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}

int main() {
	// your code goes here
	int t=1;
	// cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}