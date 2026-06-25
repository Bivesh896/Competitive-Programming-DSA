/*
Problem: 474-A Keyboard
Platform: Codeforces
Rating: 900
Topic: Implementation
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    char c;
    string s,s1="qwertyuiop",s2="asdfghjkl;",s3="zxcvbnm,./";
    cin>>c;
    cin>>s;
    if(c == 'R')
    {
        for(int i=0;i<s.length();i++)
        {
            for(int j=0;j<s1.length();j++)
            {
                if(s[i] == s1[j])
                {
                    s[i] = s1[j-1];
                    break;
                }
            }
            for(int j=0;j<s2.length();j++)
            {
                if(s[i] == s2[j])
                {
                    s[i] = s2[j-1];
                    break;
                }
            }
            for(int j=0;j<s3.length();j++)
            {
                if(s[i] == s3[j])
                {
                    s[i] = s3[j-1];
                    break;
                }
            }
        }
    }
    else
    {
        for(int i=0;i<s.length();i++)
        {
            for(int j=0;j<s1.length();j++)
            {
                if(s[i] == s1[j])
                {
                    s[i] = s1[j+1];
                    break;
                }
            }
            for(int j=0;j<s2.length();j++)
            {
                if(s[i] == s2[j])
                {
                    s[i] = s2[j+1];
                    break;
                }
            }
            for(int j=0;j<s3.length();j++)
            {
                if(s[i] == s3[j])
                {
                    s[i] = s3[j+1];
                    break;
                }
            }
        }
    }
    cout<<s;
    return 0;
}