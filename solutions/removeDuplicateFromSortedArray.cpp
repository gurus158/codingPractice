#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int result=1;
        if(nums.size()==0) return 0;
        if (nums.size()==1) return 1;
        if(nums.size()==2 && nums[0]==nums[1]) return 1;
        if(nums.size()==2 && nums[0]!=nums[1]) return 2;

        for(int i=0;i<nums.size()-1;i++){
            int j=i+1;
            while(nums[j]<=nums[i] && j<nums.size()){
                j++;
            }
            if(j>=nums.size()) return result;
            swap(nums[i+1],nums[j]);
            result++;

        }
        return result;
    }
};

/* better solution
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int result=1;
        if(nums.size()==0) return 0;
        if (nums.size()==1) return 1;

        for(int i=1;i<nums.size();i++){
            if(nums[i-1]!=nums[i]) nums[result++]=nums[i];
        }
        return result;
    }
};
*/

int main(){
  vector<int> nums = {1,1};
  
  Solution s;
  int k=s.removeDuplicates(nums);
  for(int i=0;i<k;i++){
    cout<<nums[i]<<",";
  }
}
