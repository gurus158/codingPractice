#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int numIslands(vector<vector<char>>& grid) {
      if(grid.size()==0)
        return 0;
      int res=0;

      for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid[i].size();j++){
          if(grid[i][j]=='9'||grid[i][j]=='0')
            continue;
        else  {
            travel(grid,i,j);
            res++;
          }
        }
      }
      return res;
    }
    void travel(vector<vector<char>>& grid,int i,int j){
        if(i<0||i>grid.size()-1||j<0||j>grid[i].size()-1||grid[i][j]=='9'||grid[i][j]=='0')
            return;
        grid[i][j]='9';
        travel(grid,i-1,j);
        travel(grid,i+1,j);
        travel(grid,i,j-1);
        travel(grid,i,j+1);
        return;
    }
};
int main(){
  Solution s;
  vector<vector<char>> grid={{'0'}};
  cout<<s.numIslands(grid);

}
