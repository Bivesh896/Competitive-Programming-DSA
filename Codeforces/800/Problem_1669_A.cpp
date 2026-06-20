/*
Problem: 236-A Division
Platform: Codeforces
Rating: 800
Topic:  Implementation
*/
#include<iostream>
using namespace std;
int main()
{
    int t,i=0;
    int *arr;
    cin>>t;
    arr = new int[t];
    while(t--)
    {
        cin>>arr[i];
        i++;
    }
    t=i;
    for(i=0;i<t;i++)
    {
        if(arr[i]>=1900)
            cout<<"Division 1"<<endl;
        else if(arr[i]>=1600 && arr[i]<=1899)
            cout<<"Division 2"<<endl;
        else if(arr[i]>=1400 && arr[i]<=1599)
            cout<<"Division 3"<<endl;
        else    
            cout<<"Division 4"<<endl;
    }
    delete []arr;
    return 0;
}