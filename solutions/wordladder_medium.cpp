#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
      unordered_map<string,int> um;
      // unordered_map<string,int> visited;
      queue<string> q;
      bool check=false;
      int count=0;
      for(auto w:wordList){
        if(endWord==w){
          check=true;
        }
        um[w]=0;
      }

      if(!check)
        return 0;
      q.push(beginWord);
      bool isPush=false;
      int res=1;
      while(!q.empty()){
        int s=q.size();
        for(int i=0;i<s;i++){
          string cur=q.front();
          q.pop();

          if(cur==endWord)
          return res;
          unordered_map<string,int>::iterator it=um.begin();
          while(it!=um.end()){
            if(it->second == 0){
              if(checkDifference(cur,it->first))
                {
                  if(it->first==beginWord){
                    it++;
                    continue;
                  }
                  q.push(it->first);
                  it->second=1;
                  // cout<<it->first<<" ";

                }
            }

            it++;
          }
        }
        res++;
        // cout<<q.size()<<endl;
      }
    return 0;
    }
    bool checkDifference(string s1,string s2){
      int diff=0;
      for(int i=0;i<s1.size();i++){
        if(s1[i]!=s2[i])
        diff++;
        if(diff>1)
        break;
      }
      if(diff==1){
        // cout<<s1<<" "<<s2<<endl;
        return true;

      }
      return false;
    }
};

int main(){
  string beginWord="leet";
  string endWord="code";
  vector<string> wordList={"lest","leet","lose","code","lode","robe","lost"};
  Solution s;
  cout<<s.ladderLength(beginWord,endWord,wordList);
  // (s.checkDifference(beginWord,endWord))?cout<<"yes":cout<<"no";

  // "leet"
  // "code"
  //
}
