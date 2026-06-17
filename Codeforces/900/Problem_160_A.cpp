/*
Problem: 160-A Twins
Platform: Codeforces
Rating: 900
Topic: Greedy/Sortings
*/
#include<iostream>
using namespace std;
int main()
{
    int n,*arr,i,j,temp,sum_k=0,total_sum=0;
    cin>>n;
    arr = new int[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        total_sum+=arr[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        sum_k += arr[i];
        if(2*sum_k>total_sum)
            break;
    }
    delete []arr;
    cout<<i+1;
    return 0;   
}