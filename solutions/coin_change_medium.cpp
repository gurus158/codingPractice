#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
    vector<int> dp(amount+1,-1);
    dp[0]=0;
    dp[amount]= solve(coins, amount , dp);
    // cout<<dp[amount]<<endl;
    return (dp[amount]==INT_MAX-1)?-1:dp[amount];
    }
    int solve(vector<int>& coins, int n, vector<int>& dp ){
      if(n==0)
      return 0;
      if(dp[n]!=-1) return dp[n];
      int r=INT_MAX-1;
      for(int i=0;i<coins.size();i++){
        if(n>=coins[i]){
          int x=1+solve(coins,n-coins[i],dp);
          r=min(r,x);
        }
      }
      // cout<<r<<"||";
      dp[n]=r;
      return dp[n];
    }

};

int main(){
  vector<int> coins={100,2,3,5,7};
  Solution s;
  cout<<s.coinChange(coins,11);
}
