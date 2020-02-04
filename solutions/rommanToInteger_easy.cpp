#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int res=0;
        map<char,int> m;
        m.insert({'I',1});
        m.insert({'V',5});
        m.insert({'X',10});
        m.insert({'L',50});
        m.insert({'C',100});
        m.insert({'D',500});
        m.insert({'M',1000});
        char prev = s[0];
        res+= m.find(prev)->second;
        map<char, int>::iterator it;

        for(int i=1;i<s.size();i++){
            it=m.find(s[i]);
            char cur=it->first;
            // cout<<"cur: "<<cur<<endl;
            // cout<<"res: "<<res<<endl;
            // cout<<"prev: "<<prev<<endl;
            switch (cur) {
              case 'I':
                res+=1;
                prev=cur;
                continue;
              case 'V':
                if(prev=='I')
                  res+=(4-m.find(prev)->second);
                else
                  res+=5;
                prev=cur;
                continue;
              case 'X':
              if(prev=='I')
                {res+=(9-m.find(prev)->second);
                // cout<<res<<endl;
              }
              else
                res+=10;
              prev=cur;
              continue;
              case 'L':
              if(prev=='X')
                res+=(40-m.find(prev)->second);
              else
                res+=50;
              prev=cur;
              continue;
              case 'C':
              if(prev=='X')
                res+=(90-m.find(prev)->second);
              else
                res+=100;
              prev=cur;
              continue;
              case 'D':
              if(prev=='C')
                res+=(400-m.find(prev)->second);
              else
                res+=500;
              prev=cur;
              continue;
              case 'M':
              if(prev=='C')
                res+=(900-m.find(prev)->second);
              else
                res+=1000;
              prev=cur;
              continue;
              default:
                res+=0;
            }


        }
        return res;
    }
};

int main(){
  string inp="IX";
  Solution s;
  cout<<s.romanToInt(inp);
}
