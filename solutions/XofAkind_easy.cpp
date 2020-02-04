#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
  /* note:
    1 <= deck.length <= 10000
    0 <= deck[i] < 10000
*/

    bool hasGroupsSizeX(vector<int>& deck) {
          vector<int> deckCards(10000);
          for(int i=0;i<deck.size();i++){
            deckCards[deck[i]]++;
          }


          std::vector<int> v;
          for(int i=0;i<deckCards.size();i++){
            if(deckCards[i]!=0)
            v.push_back(deckCards[i]);
          }
          if(v.size()==1 && v[0]%2==0)
            return true;
          int h;
          for(int i=0;i<v.size()-1;i++){
         h=findHCF(v[i],v[i+1]);
            v[i+1]=h;
          }
          // cout<<h<<endl;
          if(h>=2)
          return true;
          return false;
    }
    int findHCF(int a,int b){
      if(a==0)
        return b;
      if(b==0)
        return a;
      if(a==b)
        return a;
      if(a>b)
        return findHCF(a-b,b);
      return findHCF(a,b-a);
    }
};

int main(){
  std::vector<int> inp={1,1};
  Solution s;
  if(s.hasGroupsSizeX(inp))
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;
}
