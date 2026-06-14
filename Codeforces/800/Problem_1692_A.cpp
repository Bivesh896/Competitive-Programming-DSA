/*
Problem: 1692-A Marathon
Platform: Codeforces
Rating: 800
Topic:  Implementation
*/
#include <iostream>
using namespace std;
int main() 
{
    int t,a,b,c,d,i,ans;
    int *output;
    cin>>t;
    output = new int[t];
    for(i=0;i<t;i++)
    {
        ans=0;
        cin>>a>>b>>c>>d;
        if(b>a)
            ans++;
        if(c>a)
            ans++;
        if(d>a)
            ans++;
        output[i] = ans;
    }
    for(i=0;i<t;i++)
        cout<<output[i]<<endl;
    delete []output;
    return 0;
}