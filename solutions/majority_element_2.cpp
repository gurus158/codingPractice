#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
   vector<int> majorityElement(vector<int>& nums){
    int counter1 = 0 ,counter2=0;
    int e1=INT_MIN ,e2=INT_MIN;
    vector<int> out;
    for(int i=0;i<nums.size();i++){
      if(e1!=INT_MIN && e1==nums[i])
      counter1++;
      else if(e2!=INT_MIN && e2==nums[i])
      counter2++;
      else if(counter1==0){
        e1=nums[i];
        counter1++;
      }
      else if(counter2==0){
        e2=nums[i];
        counter2++;
      }
      else{
        counter1--;counter2--;
      }
      }

    counter1 =0;
    counter2=0;
    for(auto i : nums){
      if(i==e1)
      counter1++;
      if(i==e2)
      counter2++;
    }


    if(counter1 > (nums.size()/3))
    out.push_back(e1);
    if(counter2 > (nums.size()/3))
    out.push_back(e2);
    return out;
  }
};
int main(){
  vector<int> nums = {2,1};
  Solution s;
  vector<int> out = s.majorityElement(nums);
  for(auto i : out){
    cout<<i<<endl;
  }
}
