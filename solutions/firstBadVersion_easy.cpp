#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
  int firstBadVersion(int n) {
      int low=0;
      int high = n;

      int mid = (low+high)/2;
      while(1){
        if(mid==low || mid==high)
        break;
        cout<<"mid: "<<mid<<endl;
        cout<<"low: "<<low<<endl;
        cout<<"high: "<<high<<endl;
      if(isBadVersion(mid)){
        high=mid;
        mid = (low+mid)/2;
      }
      else{
        low=mid;
        mid = (mid+high)/2;
      }
  }
  return mid+1;
}
  bool isBadVersion(int version){
    return (version>=2)?true:false; //bad version is 2 for this test
  }
};
int main(){
  Solution s;
cout<<s.firstBadVersion(1);
}
