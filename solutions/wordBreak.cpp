/*
Given a non-empty string s and a dictionary wordDict containing a list of non-empty words, determine if s can be segmented into a space-separated sequence of one or more dictionary words.

Note:

    The same word in the dictionary may be reused multiple times in the segmentation.
    You may assume the dictionary does not contain duplicate words.

Example 1:

Input: s = "leetcode", wordDict = ["leet", "code"]
Output: true
Explanation: Return true because "leetcode" can be segmented as "leet code".

*/


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
      map<string,bool> cache;
        return solve(s,wordDict,cache);
    }
    bool solve(string s, vector<string>& wordDict, map<string,bool>& cache){
      map<string,bool>::iterator it ;
      if (s.size()==0 ) return true;
      it=cache.find(s);
      if( it!=cache.end())
      {
        cout<<"worked\n";
        return it->second;
      }
      bool res=false;

      for(auto w:wordDict){
        string ss=s;
        // cout<<"line 27";
        // string w=wordDict[i];
        if(isPrefix(ss,w)){
          ss.erase(0,w.size());
          cout<<ss<<"\n";
          res=solve(ss,wordDict,cache);
        }
        if(res){
          cache.insert({s,true});
          return true;}

      }
    cache.insert({s,false});
    return false;
    }
    bool isPrefix(string s, string w){
      cout<<s<<" "<<w<<endl;;
      if(s.compare(0, w.size(), w) == 0)
      return true;
      return false;
    }
};

int main(){

  vector<string> wordDict ={"ab","cd","abcd","h"};
  string s="abcdefgh";
  Solution ss ;
  (ss.wordBreak(s,wordDict)) ? cout<<"yes":cout<<"NO";
}
