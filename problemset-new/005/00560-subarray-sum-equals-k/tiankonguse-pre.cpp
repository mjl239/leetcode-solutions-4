/*************************************************************************
    > File Name: tiankonguse-pre.cpp
    > Author: tiankonguse
    > Mail: i@tiankonguse.com 
    > Created Time: 2020年05月15日 19:43:19
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
template <class T>
using min_queue = priority_queue<T, vector<T>, greater<T> >
template <class T>
using max_queue = priority_queue<T>

typedef long long LL;
const double PI = acos(-1.0), eps = 1e-7;
const int INF = 0x3f3f3f3f, ninf = 0xc0c0c0c0, mod = 1000000007;
const int max3 = 4100, max4 = 11100, max5 = 200100, max6 = 2000100;
const int debug = 0;
const int inf = 0x3f3f3f3f;
#define  myprintf(fmt,args...) do{if(debug)printf(fmt, ##args);}while(0)

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        int ans = 0, sum = 0;
        for(auto v: nums){
            sum += v;
            if(m.count(sum - k)){
                ans += m[sum - k];
            }
            if(sum == k){
                ans++;
            }
            m[sum]++;
        }

        return ans;
    }
};


int main(){
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    if(debug == 0)freopen("out.txt", "w", stdout);
#endif

    return 0;
}
