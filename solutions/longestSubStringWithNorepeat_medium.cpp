#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int l=s.size();
    int cl=1;
    int result = 1;
    int preIndex;
    int* visited = new int[sizeof(int) * 256];
    for(int i=0;i<256;i++){
      visited[i]=-1;
    }
    visited[s[0]] = 0;
    for(int i=1;i<l;i++){
      preIndex = visited[s[i]];
      if(preIndex == -1||i-cl>preIndex)
      cl++;
      else{
        if(cl>result)
        result = cl;
        cl=i-preIndex;
      }
      visited[s[i]]=i;
    }
    result = max(result,cl);
    free(visited);
    return result;
    }
};
int main(){
  string inp="ckklbkd";
  Solution s;
  std::cout << s.lengthOfLongestSubstring(inp) << '\n';
}
