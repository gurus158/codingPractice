#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
      std::vector<string> out;
      helper(n,n,"",out);
      return out;
    }
    void helper(int open,int close,string s,vector<string>& out){
      if(open==0&&close==0){
        out.push_back(s);
      }
      if(open>close)
      return;
      if(open>0){
        helper(open-1,close,s+"(",out);
      }
      if(close>0)
      helper(open,close-1,s+")",out);
    }
};
int main(){
  int n=3;
  Solution s;
  vector<string> o = s.generateParenthesis(3);
  for(auto i:o){
    cout<<i<<endl;
  }
}
