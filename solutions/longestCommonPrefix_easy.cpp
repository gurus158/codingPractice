#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      if(strs.size()==1)
            return strs[0];
        if(strs.size()==0)
            return "";
        string s1=strs[0];
        string out="";
        int minSize=s1.size();
        for(int cur=0;cur<minSize;cur++){
        for(int i = 1;i<strs.size();i++){
          if(strs[i].size()<minSize)
          minSize=strs[i].size();
          if(s1[cur]!=strs[i][cur])
            return out;
        }
        out.push_back(s1[cur]);
      }
      return out;
    }
};

int main(){
  vector<string> strs;
  strs.push_back("flow");
  strs.push_back("flower");
  strs.push_back("o");
  Solution s;
  cout<<'"'<<s.longestCommonPrefix(strs)<<'"'<<endl;
}
