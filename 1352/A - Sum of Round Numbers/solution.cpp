#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2")
static const int _ = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
using ll = long long;
using ld = long double;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define pb push_back
#define mp make_pair
#define F first
#define S second
const int INF = 1e9 + 7;
const ll LINF = 1e18 + 7;
const ll MOD = 1e9 + 7;
int main(){
    int t ;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> ans;
        int place = 1;
 
        while (n > 0) {
            int digit = n % 10;
            if (digit != 0)
                ans.push_back(digit * place);
            n /= 10;
            place *= 10;
        }
 
        cout << ans.size() << "
";
        for (int x : ans)
            cout << x << " ";
        cout << "
";
    }
 
    return 0;
}
   