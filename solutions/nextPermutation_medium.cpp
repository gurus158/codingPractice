#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
      int r=nums.size()-1;
      for(;r>0;r--){
        if(nums[r]>nums[r-1])
        break;
      }
      if(r==0){
      sort(nums.begin(),nums.end());return;
    }
      int pos=r-1,csmall=r;
      for(int i=r;i<nums.size();i++){
        if(nums[i]>nums[pos]&&nums[i]<nums[csmall])
          csmall=i;
      }
      int t;
      t=nums[csmall];
      nums[csmall]=nums[pos];
      nums[pos]=t;
      sort(nums.begin()+pos+1,nums.end());
    }
    /* better appraoch with reverse
    void nextPermutation(vector<int>& nums) {
    	int n = nums.size(), k, l;
    	for (k = n - 2; k >= 0; k--) {
            if (nums[k] < nums[k + 1]) {
                break;
            }
        }
    	if (k < 0) {
    	    reverse(nums.begin(), nums.end());
    	} else {
    	    for (l = n - 1; l > k; l--) {
                if (nums[l] > nums[k]) {
                    break;
                }
            }
    	    swap(nums[k], nums[l]);
    	    reverse(nums.begin() + k + 1, nums.end());
        }
    }

    */
};

int main(){
  Solution s;
  std::vector<int> v={1,3,4};
  s.nextPermutation(v);
  for(auto i:v)
    cout<<i<<" ";
}
