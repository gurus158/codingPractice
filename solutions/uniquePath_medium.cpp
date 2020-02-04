#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  //DP solution O(m*n) time and space both
    int uniquePaths(int m, int n) {
       vector<vector<int>> board(m,vector<int>(n,0));
       for(int j=0;j<n;j++)
        board[0][j]=1;
        for(int j=0;j<m;j++)
        board[j][0]=1;
        for(int i=1;i<m;i++){
          for(int j=1;j<n;j++)
             board[i][j]=board[i-1][j]+board[i][j-1];
        }

       return board[m-1][n-1];
    }
//Math solution with time complexity = O(m+n) or less
int uniquePathsMath(int m,int n){
  return combination(m+n-2,m-1);
}
long long combination(int n, int r) {
    if(r > n - r) r = n - r; // because C(n, r) == C(n, n - r)
    long long ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}

};

int main() {
  Solution s;
  cout<<s.uniquePathsMath(6,5);
  return 0;
}
