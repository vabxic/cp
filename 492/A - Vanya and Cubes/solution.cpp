#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int height = 0;
 
    for (int i = 1;; i++) {
        int need = i * (i + 1) / 2;
 
        if (n >= need) {
            n -= need;
            height++;
        } else {
        break;
    }
}
 
cout << height << '
';
return 0;
}