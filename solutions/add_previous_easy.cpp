#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  void add_previous(vector<int>& arr){
    for(int i=1;i<arr.size();i++){
      arr[i]=arr[i]+arr[i-1];
      // cout<<arr[i]<<"|";
    }
    // return arr;
  }
};

int main(){
  Solution s;
  vector<int> arr={1,2,3,4,5,6};
  s.add_previous(arr);
  for(auto x: arr){
    cout<<x<<" ";
  }
}
