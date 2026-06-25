/*
Problem: 1722-A Spell Check
Platform: Codeforces
Rating: 800
Topic: Implementation
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t,n,i,j,k;
    string s,*ans;
    char ch;
    cin>>t;
    ans = new string[t];
    for(i=0;i<t;i++)
    {
        cin>>n;
        cin>>s;
        if(n!=5)
            ans[i] = "NO";
        else
        {
            for(k=0;k<s.length()-1;k++)
            {
                for(j=0;j<s.length()-1;j++)
                {
                    if(s[j]>s[j+1])
                    {
                        ch = s[j];
                        s[j] = s[j+1];
                        s[j+1] = ch;
                    }
                }
            }
            if(s == "Timru")
                ans[i] = "YES";
            else
                ans[i] = "NO";
        }
    }
    for(i=0;i<t;i++)
        cout<<ans[i]<<endl;
    delete []ans;
    return 0;
}