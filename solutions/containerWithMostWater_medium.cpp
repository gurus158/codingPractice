#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int m=0;
        for(int i=0,j=height.size()-1;i<j;){
            m=max(m,(j-i)*min(height[i],height[j]));
            (height[i]<height[j])?i++:j--;
        }
        return m;
    }
};
int main(){
Solution s;
vector<int> height={1,1};
cout<<s.maxArea(height);

}
