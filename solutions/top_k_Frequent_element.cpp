#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      vector<int> res;
        map<int,int> M;
        int c_max=INT_MIN;
        for(int i=0;i<nums.size();i++){
          if (M.find(nums[i]) == M.end()) {
            M[nums[i]] = 1;
        }

        // Else update the frequency
        else {
            M[nums[i]]++;
        }

          c_max=max(c_max,M[nums[i]]);
        }
        cout<<c_max;
        vector<vector<int>> bucket(c_max+1);
        cout<<bucket.size()<<endl;
        for(auto it:M)
        {
          int f=it.first;
          int s=it.second;
          // cout<<it.first<<" "<<it.second<<endl;
          bucket[s].push_back(f);
        }

    for(int i=bucket.size()-1;i>=0;i--){
      if(bucket[i].size()>0)
      {
        for(int j=0;j<bucket[i].size();j++)
        {
          if(k==0)
          return res;
          res.push_back(bucket[i][j]);
          k--;
        }
      }
    }
    return res;
    }
};

int main(){
  vector<int> inp={1,1,1,2,2,3};
  Solution s;
  vector<int> out=s.topKFrequent(inp,2);
  for(auto i: out){
    cout<<i<<" ";
  }
}
