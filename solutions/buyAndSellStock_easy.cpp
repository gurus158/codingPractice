#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  int maxProfit(vector<int>& prices) {
    int bd=0,p=0,sd=0;
    for(int j=bd+1;j<prices.size();j++){
      if(prices[bd]>prices[j])
        bd=j;
      if(prices[j]>prices[bd]){
        int tp=prices[j]-prices[bd];
        p = max(tp,p);
        }
    }
    return p;
    }
};
int main(){
std::vector<int> v={7,1,5,3,6,4};
Solution s;
cout<<s.maxProfit(v);
}
