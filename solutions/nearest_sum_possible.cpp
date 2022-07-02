#include <bits/stdc++.h>
using namespace std;
int closestSubarraySumToK(int a[], int n, int k)
{
    set<int> s;
    int mini;
    int presum = 0;//a[0];
 
    s.insert(presum);
 
    for(int i=0;i<n;i++){
        if (a[i]==k) return a[i];
        if(a[i]>k){
    	     mini = a[i]-k;
             break;
    	}
    }
    int sum = presum;
 
    for (int i = 0; i < n; i++) {
 
        presum += a[i];
 
        auto it = s.lower_bound(presum - k);
 
        if (it == s.begin()) {
 
            int diff = *it;
 
            if (((presum - diff) - k) >0 && ((presum - diff) - k) < mini) {
 
                mini = (presum - diff) - k;
 
                sum = presum - diff;
            }
        }
 
        else if (it != s.end()) {
 
            int diff = *it;
 
            if (((presum - diff) - k) >0 && ((presum - diff) - k) < mini) {
 
                mini = (presum - diff) - k;
 
                sum = presum - diff;
            }
            it--;
 
            diff = *it;
 
            if (((presum - diff) - k) >0 && ((presum - diff) - k) < mini) {
 
                mini = (presum - diff) - k;
 
                sum = presum - diff;
            }
        }
 
        else {
 
            if ((presum - k) >0 && (presum - k) < mini) {
 
                mini = presum - k;
 
                sum = presum;
            }
        }
 
        s.insert(presum);
    }
    
    for (auto it = s.begin(); it !=
                             s.end(); ++it)
        cout << ' ' << *it;
    cout<<'\n';
    return sum;
}
 
int main()
{
    int a[] = { 20,21,45,45,45,80,80,800 };
    int n = sizeof(a) / sizeof(a[0]);
    int k = 100;
 
    cout<< closestSubarraySumToK(a, n, k);
    return 0;
}
