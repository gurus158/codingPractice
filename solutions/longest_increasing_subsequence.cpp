#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int binarySearchPileIndex(vector<int>& piles, int n){
      int l=0;
      int r=piles.size()-1;
      int m=-1;
      while(l<=r){
        m=l +(r-l)/2;
        int x=piles[m];
        if(n==x) return m;
        if(x<n) l=m+1;
        else r=m-1;
      }
      if(l>=piles.size()) return -1;
      return (piles[l]>=n?l:-1);
    }
    int lengthOfLIS(vector<int>& nums) {
    vector<int> pilesTop ;
    // int currentPile=0;
    for(int i=0;i<nums.size();i++){
      if(pilesTop.size()==0)
      pilesTop.push_back(nums[i]);
      else{
        int idx=binarySearchPileIndex(pilesTop,nums[i]);
        bool newPile=false;
        if (idx==-1)
        newPile=true;
        else{
          pilesTop[idx]=nums[i];
        }
        if(newPile){
          pilesTop.push_back(nums[i]);
        }
      }
    }
    return pilesTop.size();
    }
};

int main(){
  vector<int> nums={10,5,8,3,9,4,12,11};
  Solution s;
  cout<<s.lengthOfLIS(nums);
}
