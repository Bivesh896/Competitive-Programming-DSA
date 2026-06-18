/*
Problem: 405-A Gravity Flip
Platform: Codeforces
Rating: 900
Topic: Implementation / Greedy / Sortings
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,i,j,temp,*arr;
    cin>>n;
    arr = new int[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (i=0;i<n;i++)
        cout<<arr[i]<<" ";
    delete []arr;
    return 0;
}
