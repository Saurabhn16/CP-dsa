int fun(vector<int> &nums, int target, int l, int r) {
  int mid = (l + r) / 2;
  while(l<=r){
  if (target == nums[mid]) {
    return mid;
  }

  else if (target < nums[mid]) {
    return fun(nums, target, 0, mid-1);

  } else if (target > nums[mid]) {
    return fun(nums, target, mid + 1, r);
  }
  }
   
    return -1;
  
}
int search(vector<int> &nums, int target) {
  
  int l = 0;
  int r = nums.size() - 1;
  int dp[nums.size()-1];
  
  int mid = (l + r) / 2;
  int k = fun(nums, target, l, r);

  return k;
}