#include<bits/stdc++.h>
using namespace std;
/*
It a exponential problem(NP-Hard)
backtrack with optimization is the approach
*/
class Solution {
   public:
   bool solve(int idx, vector <int>& sums, int target, vector <int>& nums){
      if(idx >= nums.size()){
         return sums[0] == sums[1] && sums[1] == sums[2] && sums[2] == target;
      }
      for(int i = 0; i < 4; i++){
         if(sums[i] + nums[idx] > target)continue; // check if current idx value can be added in current side of squre, if not try to add in another side
         sums[i] += nums[idx];  // add current idx value if can be added in current side of the square
         if(solve(idx + 1, sums, target, nums)) return true; // recursive try new updated values of the side
         sums[i] -= nums[idx]; // if can't solve by adding in current side  , remove from side and try for different side
      }
      return false;
   }
   bool makesquare(vector<int>& nums) {
      if(nums.size() == 0) return false;
      int x = 0;
      for(int i = 0; i < nums.size(); i++){
         x += nums[i];
      }
      if(x % 4) return false;
      sort(nums.rbegin(), nums.rend());
      vector <int> sum(4);
      return solve(0, sum,x / 4, nums);
   }
};

int main(){
    Solution s;
    vector<int> input_arr = {3,3,3,3,4,5,4,1,4,2,8};
    string result = (s.makesquare(input_arr))?"YES":"NO";
    cout<<result;

}