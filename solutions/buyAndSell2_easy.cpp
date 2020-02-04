#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int bd=0,sd,p=0,cp=0;
      for(int i=1;i<prices.size();i++){
        if(prices[i]<=prices[bd])
          {bd=i;continue;}
          else{
            sd=i;
            cp=prices[bd]-prices[sd];
            }
          if(prices[i]<=prices[sd]){
            bd=i;
            p+=cp;
          }
      }
      return p;
    }
    // int maxProfit(vector<int>& prices,int start,int end){
    //   if(end<=start)
    //   return 0;
    //   int p=0;
    //   for(int i=start;i<end;i++){
    //     for(int j=i+1;j<=end;j++){
    //       if(prices[j]>prices[i]){
    //         int cp=prices[j]=prices[i] + maxProfit(prices,start,i-1)+maxProfit(prices,j+1,end);
    //         p=max(p,cp);
    //       }
    //     }
    //   }
    //   return p;
    // }
};
