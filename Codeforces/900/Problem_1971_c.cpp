/*
Problem: 1971-C Clock and Strings
Platform: Codeforces
Rating: 900
Topic: Implementation
*/
#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() 
{
    int t,a,b,c,d,temp,i;
    string *ans;
    cin>>t;
    ans = new string[t];
    for(i=0;i<t;i++)
    {
        cin>>a>>b>>c>>d;
        temp = min(a,b);
        a = a+b;
        b = a-temp;
        a = a-b;
        temp = min(c,d);
        c = c+d;
        d = c-temp;
        c = c-d;
        if(a>c && b>d)
        {
            if(d==12)
            {
                if(a<c)
                {
                    if(b<c)
                        ans[i] = "NO";
                    else
                        ans[i] = "YES";
                }
                else
                    ans[i] = "NO";
            }
            else
            {
                if(a>c && a<d)
                {
                    if(b>c && b<d)
                        ans[i] = "NO";
                    else
                        ans[i] = "YES";
                }
                else
                    ans[i] = "NO";
            }
        }
        else
        {
            if(b==12)
            {
                if(c<a)
                {
                    if(d<a)
                        ans[i] = "NO";
                    else
                        ans[i] = "YES";
                }
                else
                    ans[i] = "NO";
            }
            else
            {
                if(c>a && c<b)
                {
                    if(d>a && d<b)
                        ans[i] = "NO";
                    else
                        ans[i] = "YES";
                }
                else
                    ans[i] = "NO";
            }
        }
    }
    for(i=0;i<t;i++)
        cout<<ans[i]<<endl;
    delete []ans;
    return 0;
}