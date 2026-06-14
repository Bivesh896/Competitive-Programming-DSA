/*
Problem: 136-A Presents
Platform: Codeforces
Rating: 800
Topic:  Strings / Bitwise Logic
*/
#include <iostream>
#include<string>
using namespace std;
int main() 
{
    int t,i,flag;
    char c;
    cin>>t;
    string *s;
    s = new string[t];
    for(i=0;i<t;i++)
    {
        cin>>c;
        flag = 0;
        for(char ch:"codefrs")
            if(c == ch)
                flag = 1;
        if(flag)
            s[i] = "YES";
        else
            s[i] = "NO";
    }
    for(i=0;i<t;i++)
        cout<<s[i]<<endl;
    delete []s;
    return 0;
}