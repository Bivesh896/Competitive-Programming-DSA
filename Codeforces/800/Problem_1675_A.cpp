/*
Problem: 1675-A Lucky?
Platform: Codeforces
Rating: 800
Topic: Implementation 
*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int t,sum_1=0,sum_2=0,i,n;
    string s,*ans;
    cin>>t;
    ans = new string[t];
    for(i=0;i<t;i++)
    {
        cin>>s;
        sum_1 = s[0]+s[1]+s[2] - 3*'0';
        sum_2 = s[5]+s[4]+s[3] - 3*'0';
        if(sum_1 == sum_2)
            ans[i] = "YES";
        else
            ans[i] = "NO";
    }
    for(i=0;i<t;i++)
        cout<<ans[i]<<endl;
    return 0;
}