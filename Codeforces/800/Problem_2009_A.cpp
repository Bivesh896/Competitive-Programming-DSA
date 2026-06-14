/*
Problem: 2009-A Minimize!
Platform: Codeforces
Rating: 800
Topic:  BruteForce/Math
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t,a,b;
    int *ans;
    cin>>t;
    ans = new int[t];
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        ans[i] = (b-a);
    }
    for(int i=0;i<t;i++)
        cout<<ans[i]<<endl;
    delete []ans;
    return 0;
}