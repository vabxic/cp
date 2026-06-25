#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    string s, all = "";
 
    while (n--) {
        cin >> s;
        all += s;
    }
 
    int groups = 1;
 
    for (int i = 1; i < all.size(); i++) {
        if (all[i] == all[i - 1])
            groups++;
    }
 
    cout << groups;
}