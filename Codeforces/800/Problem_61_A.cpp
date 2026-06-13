/*
Problem: 61-A Ultra-Fast Mathematician
Platform: Codeforces
Rating: 800
Topic:  Strings / Bitwise Logic
*/
#include <iostream>
#include<string>
using namespace std;
int main() 
{
    string s[2],ans;
    cin>>s[0];
    cin>>s[1];
    for(int i=0;i<s[0].length();i++)
    {
        if(s[0][i] != s[1][i] )
            ans.push_back('1');
        else
            ans.push_back('0');
    }
    cout<<ans;
    return 0;
}