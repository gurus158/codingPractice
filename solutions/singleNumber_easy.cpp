#include<bits/stdc++.h>
using namespace std;

  class Solution {
  public:
      int singleNumber(vector<int>& nums) {
        int res = 0;
        for(auto it:nums){
          res^=it;
        }
        return res;
      }
  };

int  main(int argc, char const *argv[]) {
  std::vector<int> v={4,1,2,1,2};
  Solution s;
  std::cout << s.singleNumber(v) << '\n';
  return 0;
}
