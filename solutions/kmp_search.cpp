#include<bits/stdc++.h>
using namespace std;

class KMP_ALGO{
public:
  int *compute_prefix_function(string p){

    int m = p.size();
    int *pi;
    pi=new (nothrow) int[m];
    pi[0]=0;
    int k=0;
    for(int q = 1;q<m;q++){
      while(k>0 && (p[k+1]!=p[q])){
        k=pi[k];
        if(p[k+1]==p[q])
          k = k+1;
        pi[q] = k;
      }
    }

    return pi;
  }

  void KMP_matcher(string t,string p){

    int n = t.size();
    int m = p.size();
    int *pi = compute_prefix_function(p);

    int q=0;
    for(int i=0;i<n;i++){
      while(q>0 && p[q]!=t[i])
        q=pi[q];
      if(p[q]==t[i])
          q=q+1;
      if(q==m){
          cout<<"Pattern Found at: "<<i-m+1<<endl;
          q=pi[q];
        }


    }
  }
};

int main(){
  string T="aaaabcdab";
  string P="a";
  cout<<"TEXT: "<<T<<endl;
  cout<<"Pattern: "<<P<<endl;
  KMP_ALGO kmp;

  kmp.KMP_matcher(T,P);
}
