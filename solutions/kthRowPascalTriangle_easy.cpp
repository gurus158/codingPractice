#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<int> getRow(int rowIndex) {
    std::vector<int> out;
    int x=1;
    for(int i=0;i<=rowIndex;i++){
      out.push_back(x);
      x = x * (rowIndex-i)/(i+1);
    }
    return out;
    }
};

int main(){
  Solution s;
  for(auto x : s.getRow(33))
    cout<<x;
}
