#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<vector<int>> generate(int numRows) {
vector<vector<int>> out;
vector<int> cr;
      if(numRows==0)
          return out;
for(int i=0;i<numRows;i++){

  if(i==0)
  { cr.push_back(1);
    out.push_back(cr);
  }
  else if(i==1){
    cr.push_back(1);
    cr.push_back(1);
    out.push_back(cr);
  }
else{
  cr.push_back(1);
  for(int j=0;j<out[i-1].size()-1;j++){
    cr.push_back(out[i-1][j]+out[i-1][j+1]);
  }
    cr.push_back(1);
  out.push_back(cr);

}
cr.clear();
}
return out;
    }
};
int main(){

}
