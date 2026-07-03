#include <bits/stdc++.h>
using namespace std;
 
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2")
 
static const int _ = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
 
int main() {
    int k, n, w;
    cin >> k >> n >> w;
 
    int res = 0;
    for (int i = 1; i <= w; ++i) {
        n -= k * i;
    }
 
    if (n < 0)
        res = -n;
 
    cout << res;
    return 0;
}