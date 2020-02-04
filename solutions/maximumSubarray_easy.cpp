#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
  int maxSubArray(vector<int>& nums){
    int c_max=nums[0];
    int max_so_far = nums[0];
    for(int i = 1;i<nums.size();i++){
      c_max = max(c_max+nums[i],nums[i]);
      max_so_far = max(max_so_far,c_max);
    }

    return max_so_far;
  }
};

int main(){
  vector<int> inp = {-2,1,-3,4,-1,2,1,-5,4};
  Solution s ;
  cout<<s.maxSubArray(inp);
}
