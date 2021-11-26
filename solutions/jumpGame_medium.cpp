#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxReach=0;
    bool canJump(vector<int>& nums) {
        if(nums.size()==1)
            return true;
        if(nums[0]==0)
         return false;
        int i=0,j;
        int maxReach=1;
        int l=nums.size();
        while(i<nums.size()){
            if(nums[i]==0 && i==maxReach && i<l-1)
                return false;
            j=i;
            if(nums[i]==0 && i<maxReach)
                 j=maxReach;
            maxReach=max(maxReach,min(j+nums[j],l-1));
            i++;
        }
        if(maxReach>=l-1)
            return true;
        return false;

    }
};
int main(){
  Solution s;
  vector<int> nums={1,2,0,1,1,0,1};
  (s.canJump(nums))?cout<<"YES":cout<<"NO";
}
