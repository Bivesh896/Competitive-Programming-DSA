/*
Problem: 1409-A Yet Another Two Integers Problem
Platform: Codeforces
Rating: 800
Topic:  Greedy/Math
*/
#include<iostream>
using namespace std;
int main()
{
    int t,a,b,i;
    int *ans;
    cin>>t;
    ans = new int[t];
    for(i=0;i<t;i++)
    {
        cin>>a>>b;
        if(a>b)
        {
            if((a-b)%10 == 0)
                ans[i] = (a-b)/10;
            else
                ans[i] = (a-b)/10 + 1;
        }
        else if(a<b)
        {
            if((b-a)%10 == 0)
                ans[i] = (b-a)/10;
            else
                ans[i] = (b-a)/10 + 1;
        }
        else
            ans[i] = 0;
    }
    for(i=0;i<t;i++)
        cout<<ans[i]<<endl;
    return 0;
}