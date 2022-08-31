#include<bits/stdc++.h>
using namespace std;
// rotate must be inplace
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        transapose(matrix);
        for(int i=0; i< matrix.size();i++){
            int li=0;
            int ri = matrix[i].size()-1;
            while(li<ri){
                int temp = matrix[i][li];
                matrix[i][li] = matrix[i][ri];
                matrix[i][ri] = temp;
                li++;
                ri--;
            }
        }
    }

    void transapose(vector<vector<int>>& matrix){
        for(int i=0;i< matrix.size();i++){
            for(int j=i;j<matrix[i].size();j++){
                int temp = matrix[i][j]; 
                matrix[i][j] =  matrix[j][i];
                matrix[j][i] = temp;
            }
        }
    }

    void display(vector<vector<int>>& inp){
        cout<<"{";
    for(int i=0;i<inp.size();i++){
        cout<<"{";
        for(int j=0;j<inp[i].size();j++){
            cout<<inp[i][j]<<",";
        }
        cout<<"},";
    }
    cout<<"}";
    }
};

int main(){
    vector<vector<int>> inp = {{1,2,3},{4,5,6},{7,8,9}};
    Solution s;
    s.rotate(inp);
    s.display(inp);
}