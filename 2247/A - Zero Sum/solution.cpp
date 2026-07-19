#include <bits/stdc++.h>
using namespace std;
 
#define int long long
#define endl '
'
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        int sum = 0;
        cin >> n;
 
        vector<int> a(n);
        for (int &x : a) cin >> x;
        sum = accumulate(a.begin(),a.end(),0);
        if (sum % 4 == 0){
            cout <<"YES
";
        }
        else {
            cout << "NO
";
        }
    }
 
return 0;
}