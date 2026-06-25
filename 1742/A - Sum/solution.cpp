#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2")
static const int _ = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
void solve() {
    vector<int> v(3);
 
    for (int i = 0; i < 3; i++) {
        cin >> v[i];
    }
 
    sort(v.begin(), v.end());
 
    if (v[0] + v[1] == v[2])
        cout << "YES
";
    else
        cout << "NO
";
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}