#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        cin >> a[i];
 
        int same;
 
        if (a[0] == a[1])
        same = a[0];
        else if (a[0] == a[2])
        same = a[0];
        else
        same = a[1];
 
        for (int i = 0; i < n; i++) {
            if (a[i] != same) {
                cout << i + 1 << '
';
                break;
            }
    }
}
 
return 0;
}