#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
public:
  void solveSudoku(vector<vector<char>>& board) {
       if(solve(board))
       cout<<"yes\n";

  }
    bool solve(vector<vector<char>>& board) {
        for(int row=0;row<9;row++){
          for(int col=0;col<9;col++){
            if(board[row][col]=='.'){
              for(char number='1';number<='9';number++){
                if(isAllowed(row,col,number,board)){
                  board[row][col]=number;
                  if(solve(board))
                  return true;
                  else
                  board[row][col]='.';
                }
              }
              return false;
            }
          }
        }
        return true;
    }

    bool isAllowed(int row, int col, char number , vector<vector<char>>& sudoku){
      return !(containsInRow(row, number,sudoku) || containsInCol(col, number,sudoku) || containsInBox(row, col, number,sudoku));
    }
    bool containsInCol(int col , char number ,  vector<vector<char>>& sudoku ){
      for(int i=0;i<9;i++){
        if(sudoku[i][col]==number)
        return true;
      }
      return false;
    }
    bool containsInRow(int row , char number ,  vector<vector<char>>& sudoku ){
      for(int i=0;i<9;i++){
        if(sudoku[row][i]==number)
        return true;
      }
      return false;
    }
    bool containsInBox(int row, int col, char number , vector<vector<char>>& sudoku){
      int r= row - row%3;
      int c= col - col%3;
      for(int i=r;i< r+3; i++){
        for(int j=c; j<c+3; j++){
          if(sudoku[i][j]==number)
          return true;
        }
      }
      return false;
    }
};

int main(){
  Solution s;
  vector<vector<char>> sudoku {{'5','3','.','.','7','.','.','.','.'},
                                {'6','.','.','1','9','5','.','.','.'},
                                {'.','9','8','.','.','.','.','6','.'},
                                {'8','.','.','.','6','.','.','.','3'},
                                {'4','.','.','8','.','3','.','.','1'},
                                {'7','.','.','.','2','.','.','.','6'},
                                {'.','6','.','.','.','.','2','8','.'},
                                {'.','.','.','4','1','9','.','.','5'},
                                {'.','.','.','.','8','.','.','7','9'}
                              };
 s.solveSudoku(sudoku);
 // for(int i=0;i<9;i++){
 //   for(int j=0;j<9;j++)
 //   cout<< sudoku[i][j]<<" ";
 //   cout <<"\n";
 // }

}
