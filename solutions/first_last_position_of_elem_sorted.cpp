#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> res(2,-1);
    int r = nums.size()-1;
    int l = 0;
    int mid=-1;
    int found = 0;
    if(l==-1){res[0]=-1;res[1]=-1;return res;}
    while(l<=r){
    mid = (l+r)/2;
    if(nums[mid]==target){
     found=1;
     break;
  }
   if(nums[mid]> target){
	r=mid-1;
	}
   else{
    l=mid+1;
}
}
if(!found) { res[0]=-1;res[1]=-1;return res;}
cout<<mid<<endl;
int first_occur = mid, last_occur=mid;
for(int i=mid;i>=0;i--){
if(nums[i]==target) {first_occur=i;}else{break;}
cout<<"a\n";
}
for(int j=mid;j<nums.size();j++){
if(nums[j]==target){last_occur=j;}else{break;}
cout<<"a\n";
}

res[0]=first_occur;
res[1]=last_occur;
return res;
}
    
};

int main(){
  Solution s;
  vector<int> arr={1,2,3,4,4,5,6};
  vector<int> res;
  res=s.searchRange(arr,4);
  for(auto x: res){
    cout<<x<<" ";
  }
}

