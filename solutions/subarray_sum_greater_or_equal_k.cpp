#include<iostream>
#include<vector>
#include<climits>
template<typename T>
void print(std::vector<T> v)
{
        for(auto i : v)
                std::cout<<i<<" ";
        std::cout<<std::endl;
}
template<typename T>
T closestVal(T sum, std::vector<T>& set, size_t n, std::vector<T> curSet, int& minSum, std::vector<T>& ret)
{
        if(n == 0 || sum == 0)
                return 0;
        if(set[n-1] >= sum) {
                if(sum-set[n-1] > minSum) {
                        minSum = sum-set[n-1];
                        std::vector<T> newSet = curSet;
                        newSet.push_back(set[n-1]);
                        ret = newSet;
                }
                return closestVal(sum, set, n-1, curSet, minSum, ret);
        }
        else {
                std::vector<T> newSet = curSet;
                newSet.push_back(set[n-1]);
                return std::max(
                        set[n-1] + closestVal(sum-set[n-1],set,n-1, newSet, minSum, ret),
                        closestVal(sum, set, n-1, curSet, minSum, ret)
                        );
        }
}
int main()
{
        std::vector<int> m={20,20,20,20,20,20,20,25,25,25,25,25,45,45,45,45,45,80,80,80,2000};

        std::vector<int> ret; //ret is empty, will be filled with the return value
        int i = INT_MIN; //i is instantiated to the smallest possible number

        closestVal(126, m, m.size(), {}, i, ret);

        print(ret);
        return 0;
}
