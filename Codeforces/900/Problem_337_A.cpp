/*
Problem: 337-A Puzzles
Platform: Codeforces
Rating: 900
Topic: Greedy
*/
#include<iostream>
using namespace std;
int main()
{
    int n,m,dif,new_dif,i,j,*arr,temp;
    cin>>n>>m;
    arr = new int[m];
    for(i=0;i<m;i++)
        cin>>arr[i];
    for(i=0;i<m-1;i++)
    {
        for(j=0;j<m-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    dif = arr[n-1] - arr[0];
    for(i=0;i<=m-n;i++)
    {
        new_dif = arr[i+n-1] - arr[i];
        if(dif>new_dif)
            dif = new_dif;
    }
    delete []arr;
    cout<<dif;
    return 0;
}