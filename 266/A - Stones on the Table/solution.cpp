#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
    int count = 0;
    string s ;
    cin >>s ;
 
    for (int i = 0; i < n-1 ;++i){
        if (s[i] == s[i+1])count++;
    }
    cout << count;
 
    return 0;
}