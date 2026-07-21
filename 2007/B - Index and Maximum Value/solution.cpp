#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--) {
        int n, m;
        cin >> n >> m;
 
        int mx = INT_MIN;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mx = max(mx, x);
        }
 
    while (m--) {
        char op;
        int l, r;
        cin >> op >> l >> r;
 
        if (l <= mx && mx <= r) {
            if (op == '+')
            mx++;
            else
            mx--;
        }
 
    cout << mx << " ";
}
cout << "
";
}
 
return 0;
}