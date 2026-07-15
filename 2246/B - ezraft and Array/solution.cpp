#include <bits/stdc++.h>
using namespace std;
 
using int64 = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    vector<vector<int64 >> a(51);
 
    a[1] = {1};
    a[3] = {1, 2, 3};
 
    for (int n = 4; n <= 50; n++) {
        a[n] = a[n - 1];
 
        int64 sum = 0;
        for (auto x : a[n - 1])
        sum += x;
 
        a[n].push_back(sum);
    }
 
int T;
cin >> T;
 
while (T--) {
    int n;
    cin >> n;
 
    if (n == 2) {
        cout << -1 << "
";
        continue;
    }
 
for (auto x : a[n])
cout << x << " ";
cout << "
";
}
 
return 0;
}