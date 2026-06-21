/*
Problem: 136-A Presents
Platform: Codeforces
Rating: 800
Topic:  Implementation
*/
#include <iostream>
using namespace std;
int main() 
{
    int n,i,j=0,*p,*q;
    cin>>n;
    p = new int[n];
    q = new int[n];
    for(i=0;i<n;i++)
    {
        cin>>p[i];
        q[p[i]-1] = i+1;
        j++;
    }
    for(i=0;i<n;i++)
        cout<<q[i]<<" ";
    return 0;
}
