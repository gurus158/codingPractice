#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {

      if(obstacleGrid[0][0]==1)
        return 0;

      int m=obstacleGrid.size();
      int n=obstacleGrid[0].size();
      vector<vector<long>> dp( m , vector<long>(n, 0));
      dp[0][0]=1;
      for(int i=0;i<m;i++){

        for(int j=0;j<n;j++){
          if(i==0)//first row
          {
            if(j>0){
            if(obstacleGrid[i][j]==1)
              dp[i][j]=0;
            else
                dp[i][j]=dp[i][j-1];

          }
          }

        else  if(j==0)//first coulmn
          {
            if(i>0){
              if(obstacleGrid[i][j]==1)
                dp[i][j]=0;
              else
              dp[i][j]=dp[i-1][j];
            }
          }
          else
          {
            if(obstacleGrid[i][j]==0)
            dp[i][j]=dp[i-1][j]+dp[i][j-1];
            else
            dp[i][j]=0;
          }
        }
      }
      return dp[m-1][n-1];
}

};

int main(){
  vector<vector<int>> oG={{0,0,0},
                          {0,1,1},
                          {0,0,0}
                        };
  Solution s;
  cout<<s.uniquePathsWithObstacles(oG);

}
