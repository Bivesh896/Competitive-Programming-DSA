/*
Problem: 131-A cAPS lOCK
Platform: Codeforces
Rating: 1000
Topic: Implementation / Strings
*/
#include<iostream>
#include<string>
#include <cctype>
using namespace std;
int main()
{
    int i,flag=0;
    string s;
    cin>>s;
    for(i=0;i<s.length();i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            flag++;
    }
    if(s[0]>='a' && s[0]<='z')
        flag++;
    if(flag>=s.length())
    {
        if(s[0] != toupper(s[0]))
        {
            s[0] = toupper(s[0]);
            for(i=1;i<s.length();i++)
                s[i] = tolower(s[i]);
        }
        else
            for(i=0;i<s.length();i++)
                s[i] = tolower(s[i]);
    }
    cout<<s;
    return 0;
}