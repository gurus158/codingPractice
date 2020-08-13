#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  int s1=0;
  int s2=0;
  int r=0;
    int rob(vector<int>& nums) {
      int x;
    if(nums.size()==0)
    return 0;
    if(nums.size()==1)
    return nums[0];
    if(nums.size()==2)
    return max(nums[1],nums[0]);
  // robbing first including and last excluding
   for(int i=0;i<nums.size()-1;i++){
     if(i==0){
     s2=nums[0];
   }
     else if(i==1){
     s1= max(nums[0],nums[1]);
   }
     else {
       // if((i==nums.size()-1 & i-2==0))
       //   dp[i]=max(dp[i-1],nums[i]);
       // else
         x=max((s2+nums[i]), s1);
         s2=s1;
         s1=x;
   }
   }

   r=s1;
   //robbing first excluding and last including
   for(int i=1;i<nums.size();i++){
     if((i-1)==0){
     s2=nums[1];
   }
     else if(i==2){
     s1= max(nums[1],nums[2]);
   }
     else {
       // if((i==nums.size()-1 & i-2==0))
       //   dp[i]=max(dp[i-1],nums[i]);
       // else
         x=max((s2+nums[i]), s1);
         s2=s1;
         s1=x;
   }
   }

   return max(r,s1);


}
};

int main(){
  Solution s;
  vector<int> nums{2,4,2};
  cout<< s.rob(nums);
}
