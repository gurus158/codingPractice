#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
  int mySqrt(int x) {
      long i =1;
      bool f=false;
      while(!f){
        if(i*i == x){
          return i;
        }
        else if(i*i > x)
        return i-1;
        i++;
      }
      return i;
    }
};

int main(){
  int x = 25;
  Solution s;
  cout<<s.mySqrt(x);

}
