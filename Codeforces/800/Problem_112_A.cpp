/*
Problem: 112-A Petya and Strings
Platform: Codeforces
Rating: 800
Topic: String / Implementation
*/
#include <iostream>
#include<string>
#include<cctype>
using namespace std;
int main() 
{
    int i;
    string s1,s2;
    cin>>s1>>s2;
    for( i=0;i<s1.length();i++)
    {
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
        if(s1[i]>s2[i])
        {
            cout<<1;
            break;
        }
        else if(s1[i]<s2[i])
        {
            cout<<(-1);
            break;
        }
    }   
    if(i == s1.length())
        cout<<0;
    return 0;
}