#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
          string ans;
          int len=s.size(),maxLen=0;
          for(int i=0;i<len;i++){
            string cs=findPalindromSubstr(s,i,i);//for odd length
            //cout<<cs<<endl;;
            int cl=cs.size();
            if(maxLen<cl){
              maxLen=cl;
              ans=cs;
            }
            cs=findPalindromSubstr(s,i,i+1);//for even length
            //cout<<cs<<endl;
            cl=cs.size();
            if(maxLen<cl){
              maxLen=cl;
              ans=cs;
            }

          }
          return ans;
    }
    string findPalindromSubstr(string str,int low,int high){
      int l=str.size();
        while(low>=0&&high<l&&(str[low]==str[high]))
        {low--;high++;}//expand left and right by 1
      return str.substr(low+1,high-low-1);
    }
};

int main(){
  string inp="abracadabra";
  // string test="abcd";
  // std::cout << test.substr(0,1) << '\n';
  Solution s;
  std::cout << s.longestPalindrome(inp) << '\n';
}
