#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2")
static const int _ = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
int main(){
    int a , b; 
    cin >> a >> b;
    for (int i = 1; ; i++){
        a *= 3;
        b *= 2;
        if (a > b){
            cout << i;
            break;
        }
    }
    return 0;
}