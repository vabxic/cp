#include <bits/stdc++.h>
using namespace std;
void WaterMelon(int num){
    if (num%2==0 && num>2){
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
 
}
int main()
{   int x;
    cin>>x;
    WaterMelon(x);
    return 0;
}