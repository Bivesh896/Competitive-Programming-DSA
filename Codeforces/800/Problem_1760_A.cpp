/*
Problem: 1760-A Medium Number
Platform: Codeforces
Rating: 800
Topic: Sortings / Implementation
*/
#include<iostream>
using namespace std;
int main()
{
    int t,a,b,c,max,min,i;
    int *ans;
    cin>>t;
    ans = new int[t];
    for(i=0;i<t;i++)
    {
        cin>>a>>b>>c;
        max = a>b?(a>c?a:c):(b>c?b:c);
        min = a<b?(a<c?a:c):(b<c?b:c);
        ans[i] = (a+b+c) - (max+min);
    }
    for(i=0;i<t;i++)
        cout<<ans[i]<<endl;
    delete []ans;
    return 0;
}