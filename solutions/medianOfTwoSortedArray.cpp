#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size()+nums2.size();
        vector<int> nums(n,0);
        auto it1 = nums1.begin();
        auto it2 = nums2.begin();
        auto it = nums.begin();

        for(;it!=nums.end();++it){
          if(it2==nums2.end() || it1!=nums1.end() && *it1 < *it2){
            *it = *it1++;
          }
          else{
            *it = *it2++;
          }
        }
        if(n%2==0) return ((double) nums[n/2]+nums[n/2 -1])/2;
        return (double) nums[n/2]; 

    }
};
int main()
{
  vector<int> num1 = {1,2,3,4,5,6,7,8};
  vector<int> num2 = {1,2,3,4,5,6,7,8};
  Solution s;
  std::cout << s.findMedianSortedArrays(num1,num2) << '\n';
}