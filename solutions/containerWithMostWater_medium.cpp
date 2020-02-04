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
vector<int> height={1,2,3,4,5,6,7,8,9};
cout<<s.maxArea(height);

}


//sajidmo1313@gmail.com,ravikis1313@gmail.com,rajsm1313@gmail.com,priyankagm1313@gmail.com,priyakm1313@gmail.com,sajidmo1313@yahoo.com,ravikis1313@yahoo.com,rajsm1313@yahoo.com,priyankagm1313@yahoo.com,priyakm1313@yahoo.com,vinaysha1313@gmail.com,rahuldongra1313@gmail.com,manpresingh3@gmail.com
