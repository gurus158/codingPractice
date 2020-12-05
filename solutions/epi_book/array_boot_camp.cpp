/*
input interger array one has classify even and odd , even should come first ,space complexity must be O(1)
*/

#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
  // void swap(int &a, int &b){
  //   int t;
  //   t=a;a=b;b=t;
  // }
  void classify(vector<int>& arr){
    int i=0,j=0;
    for (;i<arr.size();i++){
      if (arr[i]%2==0){
        if(i!=j){
        swap(arr[i],arr[j]);cout<<"swapped "<<endl;}
        j++;

      }
    }
  }

  void classify2(vector<int>& arr){
    int i=0,j=arr.size()-1;
    while(i<j){
      if(arr[i]%2==0){
        i++;
      }
        else{
          swap(arr[i],arr[j--]);
          cout<<"swapped"<<endl;
        }
      }

  }
};

int main(){
  Solution s;
  //{1,2,3,6,4,8,11,14,23,10}
  vector<int> arr ={1,1,1,1};
  s.classify2(arr);
  for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
  }
}
