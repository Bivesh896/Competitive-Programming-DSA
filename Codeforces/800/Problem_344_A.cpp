/*
Problem: 344-A Magnets
Platform: Codeforces
Rating: 800
Topic: Implementation
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,count=1,i;
    string *s;
    cin>>n;
    s = new string[n];
    for(i=0;i<n;i++)
        cin>>s[i];
    for(i=0;i<n-1;i++)
        if(s[i][1] != s[i+1][1])
            count++;
    delete []s;
    cout<<count;
    return 0;
}