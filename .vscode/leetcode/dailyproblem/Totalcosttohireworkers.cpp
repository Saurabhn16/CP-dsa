class Solution {
public:
     long long totalCost(vector<int>& costs, int k, int candidates) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minh;
        int i=0;
        int j=costs.size()-1;
        long long ans=0;
        while(i<candidates){
             minh.push({costs[i],i});
             i++;
        }
        i--;
        while (j>i&& j>=costs.size()-candidates){
             minh.push({costs[j],j});
                    j--;
        }
        j++;
        while(k--)
        {
          int tp=minh.top().first;
          int tpi=minh.top().second;
          minh.pop();
          ans+=tp;
          if(tpi<=i&&i+1<j){
             i++;
             minh.push({costs[i],i});
          }
          else if ( tpi>=j&& j-1>i){
             j--;
             minh.push({costs[j],j});
          }
             
        }return ans;
     
    }
};
