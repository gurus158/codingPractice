#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> um;
        vector<int> res;
        for(int i=0;i<nums1.size();i++){
          um[nums1[i]]=1;
        }
        for(int j=0;j<nums2.size();j++){
          if(um.find(nums2[j]) == um.end()){
            continue;
          }
          else{
            if(um[nums2[j]] > 1)
            continue;
            else{
              res.push_back(nums2[j]);
              um[nums2[j]]++;
            }
          }
        }
        return res;
    }
};
int main(){
  Solution s;
  vector<int> v1={1,2,3,2};
  vector<int> v2={5,2,3,3};
  vector<int> res=s.intersection(v1,v2);
  for(auto i : res){
    cout<<i<<" ";
  }
}
