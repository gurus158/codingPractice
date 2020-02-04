#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
  void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int end = m+n-1;
    m--;n--;
    while(n>=0){
      if(m<0||nums2.at(n)>nums1.at(m))
        nums1.at(end--) = nums2.at(n--);
      else
        nums1.at(end--) = nums1.at(m--);
    }
    for(auto i:nums1){
      std::cout << i << '\n';
    }

  }

};
int main(int argc, char const *argv[]) {
  /* code */
  std::vector<int> nums1={1,2,3,6,7,0,0,0,0,0};
  std::vector<int> nums2 = {4,5,8};
  Solution s;
  s.merge(nums1,5,nums2,3);

  return 0;
}
