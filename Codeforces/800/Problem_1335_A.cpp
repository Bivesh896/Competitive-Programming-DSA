/*
Problem: 1335-A - Candies and Two Sisters
Platform: Codeforces
Rating: 800
Topic: Math
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t,i;
    long long n;
    int *ans;
    cin>>t;
    ans = new int[t];
    for(i=0;i<t;i++)
    {
        cin>>n;
        ans[i] = (n-1)/2;
    }
    for(i=0;i<t;i++)
        cout<<ans[i]<<endl;
    delete []ans;
    return 0;
}