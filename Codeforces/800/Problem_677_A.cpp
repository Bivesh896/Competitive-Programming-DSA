/*
Problem: 677-A Vanya and Fence
Platform: Codeforces
Rating: 800
Topic: Implementation
*/
#include<iostream>
using namespace std;
int main()
{
    int n,h,width = 0,x;
    cin>>n>>h;
    while(n--)
    {
        cin>>x;
        if(x > h)
            width +=2;
        else
            width++;
    }
    cout<<width;
    return 0;
}