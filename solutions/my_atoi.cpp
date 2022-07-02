#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
     if(s.empty()) return 0;
     long long ret=0;
     istringstream iss(s);
     iss >> ret;
     if(ret < INT_MIN) return INT_MIN;
     if(ret >INT_MAX) return INT_MAX;
     return ret;         
    }
};