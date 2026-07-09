#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
int currentLength = 1;
int maxLength = 1;
 
for (int i = 1; i < n; i++) {
    if (a[i] > a[i - 1]) {
        currentLength++;
    } else {
    currentLength = 1;
}
maxLength = max(maxLength, currentLength);
}
 
cout << maxLength << endl;
 
return 0;
}