#include <bits/stdc++.h>
using namespace std;
 
#define int long long
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--) {
        int n, k, m;
        cin >> n >> k >> m;
 
        if (m < k) {
            cout << "NO
";
            continue;
        }
 
    cout << "YES
";
 
    for (int i = 1; i <= n; i++) {
        int cur = i % k;
        int prev = (i - 1) % k;
 
        int x = (cur - prev + m) % m;
        if (x == 0) x = m;
 
        cout << x << " ";
    }
cout << "
";
}
 
return 0;
}