#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> mp;
        for(auto str:strs){
          string tmp=str;
          sort(tmp.begin(),tmp.end());
          map<string,vector<string>>::iterator itr=mp.find(tmp);
          mp[tmp].push_back(str);
          // if(itr!=mp.end()){
          //   (itr->second).push_back(str);
          // }
          // else{
          //   vector<string> t;
          //   t.push_back(str);
          //   mp.insert(pair<string,vector<string>> (tmp,t));
          // }
        }
        vector<vector<string>> out;
        map<string,vector<string>>::iterator i = mp.begin();
        while(i!=mp.end()){
          out.push_back(i->second);
          i++;
        }
        return out;
    }
};

int main(){
  Solution s;
  vector<string> inp={"tea","ate","eat","top","pot","tell"};
  vector<vector<string>> res;
  res=s.groupAnagrams(inp);
  for(auto i : res){
    for(auto j:i){
      cout<<j<<" ";
    }
    cout<<"\n";
  }
}
