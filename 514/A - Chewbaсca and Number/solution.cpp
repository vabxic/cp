#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n; 
    cin >> n;
 
    const size_t size = log10(n)+1;
    string str = to_string(n);
    for (int i = 0; i < str.size(); i++) {
        if (i == 0 && str[i] == '9')
        continue;
 
        if (str[i] >= '5')
        str[i] =  '0'+ ('9' - str[i]);
    }
    n = stoll(str);
    cout<<n;
    return 0;
}