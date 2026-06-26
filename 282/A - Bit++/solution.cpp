#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
 
    string str;
    int x = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> str;
        if (str.find("++") != string::npos)
            x++;
        else
            x--;
    }
    cout << x;
    return 0;
}