/*
Problem: 268-A Games
Platform: Codeforces
Rating: 800
Topic: Brute-Force
*/
#include<iostream>
using namespace std;
int main()
{
    int n,*h,*a,i,count=0;
    cin>>n;
    h = new int[n];
    a = new int[n];
    for(i=0;i<n;i++)
        cin>>h[i]>>a[i];
    for (i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(h[i] == a[j])
                count++;
        }
    }
    delete []h;
    delete []a;
    cout<<count;
    return 0;
}