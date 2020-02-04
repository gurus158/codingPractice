#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
  vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> out;
        long n=pow(2,nums.size());
        for(long i=0;i<n;i++){
          vector<int> t;
          for(long j=0;j<(long)nums.size();j++){
            if ((i>>j)&1 > 0)
              t.push_back(nums[j]);
          }
          out.push_back(t);
        }


        return out;
    }
};
int main(){
  Solution s;
  vector<int> inp={1,2,3};
  vector<vector<int>> res;
  res=s.subsets(inp);
  for(auto i:res){
    for(auto j:i)
      cout<<j<<" ";
    cout<<"\n";
    }

}
