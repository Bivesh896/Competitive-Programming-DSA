/*
Problem: 1475-B New Year's Number
Platform: Codeforces
Rating: 900
Topic: Brute force / dp / math
*/
#include <iostream>
#include<string>
using namespace std;
int main() 
{
    int t,n,i,x,y;
    string *ans;
    cin>>t;
    ans = new string[t];
    for(i=0;i<t;i++)
    {
        cin>>n;
        if(n<2020)
            ans[i]="NO";
        else
        {
            y = n%2020;
            if(y*2021 <= n)
            {
                n-=y*2021;
                if(n%2020 == 0)
                    ans[i] = "YES";
                else
                    ans[i] = "NO";
            }
            else
                ans[i] = "NO";
        }
    }
    for(i=0;i<t;i++)
        cout<<ans[i]<<endl;
    delete []ans;
    return 0;
}