#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n);
 
    int mx = -1, mn = 101;
    int maxIndex = 0, minIndex = 0;
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
 
        if (a[i] > mx) {
            mx = a[i];
            maxIndex = i; // leftmost maximum
        }
 
        if (a[i] <= mn) {
            mn = a[i];
            minIndex = i; // rightmost minimum
        }
    }
 
    int ans = maxIndex + (n - 1 - minIndex);
 
    if (maxIndex > minIndex)
        ans--;
 
    cout << ans << '
';
 
    return 0;
}