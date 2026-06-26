#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
 
    string temp = s1 + s2;
 
    if (temp.size() != s3.size()) {
        cout << "NO";
        return 0;
    }
 
    sort(temp.begin(), temp.end());
    sort(s3.begin(), s3.end());
 
    if (temp == s3)
        cout << "YES";
    else
        cout << "NO";
 
    return 0;
}