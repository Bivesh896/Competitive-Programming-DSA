/*
Problem: 1873-B Comparison String
Platform: Codeforces
Rating: 900
Topic: Greedy
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t,n,i,j,count,*ans;
    string s;
    cin>>t;
    ans = new int[t];
    for(i=0;i<t;i++)
    {
        count=0;
        cin>>n;
        cin>>s;
        for(j=0;j<n-1;j++)
        {
            if(s[j] == s[j+1])
                count++;
        }
        ans[i] = count;
    }
    for(i=0;i<t;i++)
        cout<<ans[i]<<endl;
    return 0;
}