#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
    if(numRows==1)
      return s;
    int l=s.size();
    string buf[numRows];
    int r=0;
    bool dir=true;
    for(int i=0;i<l;i++){
      buf[r].push_back(s[i]);
      if(r==numRows-1)
      dir=false;
      else if(r==0)
      dir=true;
      (!dir)?r--:r++;
    }
    string o="";
    for(int i=0;i<numRows;i++)
    o+=buf[i];
      return o;
    }
};
int main(){
  Solution s;
  string inp="PAYPALISHIRING";
  cout<<s.convert(inp,4);
}
