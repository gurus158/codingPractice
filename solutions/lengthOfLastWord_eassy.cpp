#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
  int lengthOfLastWord(string s) {
    if(s.size()==0)
    return 0;
    int res=0;
    char prev=s[0];
    if(prev!=' ')
        res++;

    for(int i=1;i<s.size();i++){
      if(s[i]!=' '){
        res+=1;
      }
      else{
          if(prev == ' '){
            if(i!=s.size()-1 && s[i+1]!=' ')
              res=0;
              prev=s[i];
              continue;
            }
        if(i!=s.size()-1)
          {
            if(s[i+1]!=' '){
            res=0;
            prev=s[i];
          continue;
        }

        }
        else{
          return res;
        }
      }
      prev=s[i];
}
      return res;
    }
};

int main(){
string inp = "b  a ";
Solution s;
cout<<s.lengthOfLastWord(inp);
}
