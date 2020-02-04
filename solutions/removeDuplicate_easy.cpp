#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
  int removeDuplicates(vector<int>& nums) {
          unordered_map<int,int> um;
          for(int i=0;i<nums.size();i++){
            um[nums[i]]++;
          }
          int res=0;
          int c=0;
          for(int i=0;i<nums.size();i++){
            if(um[nums[i]]!=-1){
              cout<<nums[i]<<" "<<endl;
              um[nums[i]] =- 1;
              res++;
              nums[c++]=nums[i];
            }
          }
          return res;
    }
};
int main(){
  vector<int> inp;
  Solution s;
  inp.push_back(1);
  inp.push_back(1);
  inp.push_back(3);
  inp.push_back(2);
  // inp.push_back(1);
  cout<<s.removeDuplicates(inp)<<endl;
  for (auto i = inp.begin(); i != inp.end(); ++i)
        cout << *i << " ";
}
