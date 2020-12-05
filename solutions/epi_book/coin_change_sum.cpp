/*
Given an array of intergers , return smallest integer which can not be made by subsets of element in array
example : 21 is the smallest number which cannot be made using array [1,1,1,1,1,5,10,25]
*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  int smallest_not_possible(vector<int>& arr){
  sort(arr.begin(),arr.end());
  int x=0;
  for(int i =0; i< arr.size();i++){
    if(arr[i] <= x+1){
      x=x+arr[i];
    }
    else
    {
      return x+1;
    }
  }
  return x+1;
  }
};

int main(){
  // vector<int> input = {1,1,1,1,1,5,10,25};
  vector<int> input = {1,1,3,5,4,9,8,12};
  Solution s;
  cout<<s.smallest_not_possible(input);
}
