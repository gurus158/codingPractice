#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
  int removeElement(vector<int>& nums, int val) {
    for(auto it = nums.begin();it!=nums.end();++it){
      if(*it==val)
      nums.erase(it--);
    }
    return nums.size();
    }
};
int main(){
  vector<int> nums;
  nums.push_back(0);
  nums.push_back(1);
  nums.push_back(2);
  nums.push_back(1);
  nums.push_back(3);
  int val=1;
  Solution s;
  cout<<s.removeElement(nums,val)<<endl;
  for(int i=0;i<nums.size();i++){
    cout<<nums[i]<<" ";
  }
}
