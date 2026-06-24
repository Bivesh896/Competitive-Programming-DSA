/*
Problem: 80-A Panoramix's Prediction
Platform: Codeforces
Rating: 800
Topic: Math
*/
#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j;
    cin>>n>>m;
    for(i=n+1;;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j == 0)
                break;
        }
        if(i==j)
            break;
    }
    if(i==m)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}