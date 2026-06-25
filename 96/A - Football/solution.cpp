#include <bits/stdc++.h>
using namespace std;
string Football (string str){
    int maxPlayer = 1, count =1 ;
    for(int i = 0; i<(int)str.size();i++){
       if (str[i]==str[i+1]){
        count++;
        maxPlayer = max(maxPlayer,count);
       }
       else{
        count =1;
       }
    }
    if (maxPlayer>=7){
        return "YES";
    }
    else {
        return "NO";
    }
 
}
int main()
{   //111111100
    //101000000011
    //10101010101111111111111
    string s;
    cin >>s;
    cout <<Football(s);
    return 0;
}