/*
Problem: 34-B Sale
Platform: Codeforces
Rating: 900
Topic: Greedy / Sortings
*/
#include<iostream>
using namespace std;
int main()
{
    int n,m,*a,i,j,temp;
    cin>>n>>m;
    a = new int[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    temp = 0;
    for(i=0;i<m;i++)
        if(a[i]<=0)
            temp+=a[i];
    cout<<-temp;
    delete []a;
    return 0;
}