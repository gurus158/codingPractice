#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
  int minSubArrayLen(int s, vector<int>& nums) {
  int n = nums.size();
  int ans = INT_MAX;
  int end = 0;
  int sum = 0;
  for (int i = 0; i < n; i++) {
      sum += nums[i];
      cout<<"sum: "<<sum<<endl;
      while (sum >= s) {
          ans = min(ans, i + 1 - end);
          sum -= nums[end++];
          cout<<"sum(): "<<sum<<endl;
      }
  }
  return (ans != INT_MAX) ? ans : 0;
}

};

int main(){
  Solution s;
  vector<int> nums={1,1,1,2,3,2};
  cout<<"result: "<<s.minSubArrayLen(3,nums)<<endl;
}

/*

*/
