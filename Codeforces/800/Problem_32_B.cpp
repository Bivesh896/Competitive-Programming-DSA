/*
Problem: 32-B Borze
Platform: Codeforces
Rating: 800
Topic: Expression Parsing / Implementation
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,j=0;
    string s,ans;
    cin>>s;
    for(i=0;i<=s.length()-1;i++)
    {
        if(s[i] == '-' && s[i+1] == '.')
        {
            ans.push_back('1');
            i++;
        }
        else if(s[i] == '-' && s[i+1] == '-')
        {   
            ans.push_back('2');
            i++;
        }
        else
            ans.push_back('0');
    }
    cout<<ans;
    return 0;
}