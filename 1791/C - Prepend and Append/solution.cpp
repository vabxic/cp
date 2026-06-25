#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false); // just to increase performance
    cin.tie(NULL);
 
    int testCases; 
    cin >> testCases;          //to run multiple testcase
 
    while(testCases--){
        int n;                   //no of input
        cin >> n;
 
        string s;               //the string 
        cin >> s;
 
        int i = 0, j = s.length() - 1;
 
        while(i < j && s[i] != s[j]){
            i++;
            j--;
        }
 
        cout << j - i + 1 << "
";
    }
}