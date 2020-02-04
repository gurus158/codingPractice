#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
  bool isPalindrome(string s){
    int end=s.size()-1;
    int start=0;
    while(start<end){
      while(!isalnum(s.at(start))&&start<s.size()-1 )
      start++;

      while(!isalnum(s.at(end))&&end>0)
      end--;
      if(start<end){
      if(tolower(s.at(start))!=tolower(s.at(end)))
      return false;

      start++;
      end--;
    }
    }
    return true;
  }
};
int main(){
  string s="0P";
  Solution sol;
  (sol.isPalindrome(s))?cout<<"YES":cout<<"NO";

}
