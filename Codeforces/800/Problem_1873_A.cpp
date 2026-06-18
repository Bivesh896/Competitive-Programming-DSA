/*
Problem: 1873-A Short Sort
Platform: Codeforces
Rating: 800
Topic: Brute Force/Implementation
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t,i,j,k,count=0;
    char temp;
    string s,*ans;
    cin>>t;
    ans = new string[t];
    for(i=0;i<t;i++)
    {
        count = 0;
        cin>>s;
        if(s[0] != 'a')
            count++;
        if(s[1] != 'b')
            count++;
        if(s[2] != 'c')
            count++;
        if(count <= 2)
            ans[i] = "YES";
        else
            ans[i] = "NO";
    }
    for(i=0;i<t;i++)
        cout<<ans[i]<<endl;
    delete []ans;
    return 0;
}
