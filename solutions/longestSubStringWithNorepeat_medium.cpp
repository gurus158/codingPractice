#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
  // messy but faster(~7ms)
  int lengthOfLongestSubstring(string s)
  {
    int l = s.size();
    int cl = 1;
    int result = 1;
    int preIndex;
    int *visited = new int[sizeof(int) * 256];
    for (int i = 0; i < 256; i++)
    {
      visited[i] = -1;
    }
    visited[s[0]] = 0;
    for (int i = 1; i < l; i++)
    {
      preIndex = visited[s[i]];
      if (preIndex == -1 || i - cl > preIndex)
        cl++;
      else
      {
        if (cl > result)
          result = cl;
        cl = i - preIndex;
      }
      visited[s[i]] = i;
    }
    result = max(result, cl);
    free(visited);
    return result;
  }

  // much cleaner but slow (~25ms)
  int lengthOfLongestSubstring_2(string s)
  {
    unordered_map<char, int> seen;
    int ret = 0, slow = 0, n = s.size();
    for (int fast = 0; fast < n; ++fast)
    {
      if (seen.count(s[fast]) != 0)
        slow = max(slow, seen[s[fast]] + 1);
      seen[s[fast]] = fast;
      ret = max(ret, fast - slow + 1);
    }
    return ret;
  }
};
int main()
{
  string inp = "ckklbkd";
  Solution s;
  std::cout << s.lengthOfLongestSubstring_2(inp) << '\n';
}
