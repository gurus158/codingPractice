#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
  int *compute_prefix_function(string p){

    int m = p.size();
    int *pi;
    pi=new (nothrow) int[m];
    pi[0]=0;
    int k=0;
    int q=1;
    while(q<m){
      if(p[k]==p[q]){
          k = k+1;
          pi[q] = k;
          q++;
      }
      else{
        if(k!=0)
          k=pi[k-1];
        else{
          pi[q] = 0;
          q++;
        }
      }

    }

    return pi;
  }
  bool isRepeat(string input){
    int n=input.size();
    int *lps = compute_prefix_function(input);
    int len = lps[n-1];
    return (len>0 && n%(n-len)==0)?true:false;
  }
  bool repeatedSubstringPattern(string str)
    {
        return (str + str).substr(1, str.size() * 2 - 2).find(str)!=-1;
    }
};
  int main(){
    string input="abcdabcd";
    Solution s;
    s.repeatedSubstringPattern(input)?cout<<"True\n":cout<<"False\n";

  }
