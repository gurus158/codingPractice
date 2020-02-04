#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        int itr=0;
        sort(candidates.begin(),candidates.end());
        candidates.erase(unique(candidates.begin(),candidates.end()),candidates.end());
        combinationSum(candidates,target,ans,temp);
        return ans;
    }
    void combinationSum(vector<int>& candidates,int target,vector<vector<int>>& ans,vector<int>& temp,int itr=0) {
      if(target<0)
        return;
      if(target==0)
        {
          ans.push_back(temp);
          return;
        }
        while(itr<candidates.size() && target-candidates[itr]>=0){
          temp.push_back(candidates[itr]);
          combinationSum(candidates,target-candidates[itr],ans,temp,itr);
          itr++;
          temp.pop_back();
        }
    }
};
int main(){
Solution s;
vector<int> v={8,7,4,3};
vector<vector<int>> ans=s.combinationSum(v,11);
for(auto i : ans)
{
  cout<<"[";
  for(auto j:i){
    cout<<j<<",";
  }
  cout<<"]\n";
}

}
