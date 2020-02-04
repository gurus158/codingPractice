#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
         int s,res,e,s1=0,e1=nums.size()-1;
         if(e1==-1)
                     return -1;
                 if(e1==0)
                 {
                 (target==nums[e1])?0:-1;
                 }
         s=findPivot(nums);
         cout<<s<<endl;
         if(s==0)
          e=nums.size()-1;
        else
          e=s-1;
         cout<<e<<endl;
        if(target==nums[s])
          return s;
        if(target==nums[s1])
          return s1;
        if(target==nums[e])
          return e;
        if(target==nums[e1])
          return e1;
          int start,end;
        if(target>nums[e1]){
          start=s1;
          end=e;
        }
        else{
          start=s;
          end=e1;
        }
        cout<<start<<" "<<end<<endl;

        while(start<end){
          int mid=(start+end)/2;
          if(target==nums[mid])
            return mid;
          if(target>nums[mid])
            start=mid+1;
          if(target<nums[mid])
            end=mid-1;

        }



        return -1;
    }
    int findPivot(vector<int>& nums){
      int l=nums.size();
      if(l==1||nums[0]<=nums[l-1])
        return 0;
      int s=0,e=l-1;
      while(s<=e){
        int m=(s+e)/2;
        if(m<l-1&&nums[m]>nums[m+1])
          return m+1;
        else if(nums[s]<=nums[m])
          s=m+1;
        else
          e=m-1;
      }
      return 0;
    }
};
int main(){
  Solution s;
  vector<int> v={4,5,6,7,0,1,2};
  cout<<s.search(v,3);
}
