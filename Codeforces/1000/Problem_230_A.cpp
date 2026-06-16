/*
Problem: 230-A Dragons
Platform: Codeforces
Rating: 1000
Topic:  greedy / Sortings
*/
#include<iostream>
using namespace std;
int main()
{
    int s,n,i,j,temp;
    int *x,*y;
    cin>>s>>n;
    x = new int[n];
    y = new int[n];
    for(i=0;i<n;i++)
        cin>>x[i]>>y[i];
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(x[j]>x[j+1])
            {
                temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;
                temp = y[j];
                y[j] = y[j+1];
                y[j+1] = temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(x[i]<s)
            s+=y[i];
        else
            break;  
    }
    delete[] x;
    delete[] y;
    if(i==n)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}