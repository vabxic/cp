#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    // pattern for two numbers
    int two[] = {2, 1, 1, 2, 1, 2, 2, 1};
 
    // pattern for three numbers
    int three[] = {1, 1, 2, 1, 2, 3, 1, 3, 2, 2, 3, 3};
 
    while (T--) {
        int n;
        cin >> n;
 
        if (n % 2 == 0) {
            // split into pairs
            for (int i = 0; i < n; i += 2) {
                for (int j = 0; j < 8; j++)
                cout << two[j] + i << ' ';
            }
    } else {
    // maximize groups of 3, remainder handled by groups of 2
    int rem = n % 3;
    int use3 = n - rem;
 
    if (rem == 1) {
        use3 -= 3;
        rem += 3;
    }
 
int cur = 1;
 
while (cur <= use3) {
    for (int j = 0; j < 12; j++)
    cout << three[j] + cur - 1 << ' ';
    cur += 3;
}
 
while (cur <= n) {
    for (int j = 0; j < 8; j++)
    cout << two[j] + cur - 1 << ' ';
    cur += 2;
}
}
 
cout << '
';
}
 
return 0;
}