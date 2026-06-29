/*
Problem: 709-A Juicer
Platform: Codeforces
Rating: 900
Topic:  Implementation
*/
#include<iostream>
using namespace std;
int main()
{
    int n,b,d,*a,output=0,checker=0;
    cin>>n>>b>>d;
    a = new int[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        if(a[i]<=b)
            checker+=a[i];
        if(checker>d)
        {
            checker = 0;
            output++;
        }
    }
    delete []a;
    cout<<output;
    return 0;
}