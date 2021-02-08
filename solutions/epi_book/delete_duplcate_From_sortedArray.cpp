/*
input interger array(sorted) remove dupliactes from it
*/

#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
  void delDup(vector<int>& arr){
      int vacant_index =1;
      for(int i=1;i<arr.size();i++){
        if(arr[vacant_index-1]!=arr[i])
        arr[vacant_index++]=arr[i];
        // for(auto i:arr){
        //   cout<<i<<" ";
        // }
        // cout<<"\n";
      }
  }
};

int main(){
  Solution s;
  vector<int> arr = {1,2,3,4,4,5,6,7,7,8};
  s.delDup(arr);
  for(auto i:arr){
    cout<<i<<" ";
  }
}
