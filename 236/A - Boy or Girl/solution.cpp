#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main (){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    cin >>str;
    set<char>s(str.begin(),str.end());
    int n = s.size();
    if (n%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}