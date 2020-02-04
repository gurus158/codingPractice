#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
  vector<int> plusOne(vector<int>& digits) {
    int l = digits.size();
    bool carry=false;
    for(int i = l-1;i>=0;i--){
    if(digits[i]==9){
      digits[i]=0;
      carry=true;
      if(i==0){
        auto it = digits.insert(digits.begin(),1,1);
      }
    }
    else{
      if(carry || i==l-1)
      {digits[i]++;
        carry=false;
        break;
      }
      else{
        break;
      }
    }

  }
  return digits;
    }
};
int main(){
  vector<int> inp = {9,9,9};
  Solution s ;
  inp=s.plusOne(inp);
  for (auto i = inp.begin(); i != inp.end(); ++i)
        cout << *i << " ";
}
