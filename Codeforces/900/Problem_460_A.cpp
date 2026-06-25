/*
Problem: 460-A Vasya and Socks
Platform: Codeforces
Rating: 900
Topic: Implementation
*/
#include<iostream>
using namespace std;
int main()
{
    int n,m,count=0,i;
    cin>>n>>m;
    count += n;
    for(i=1;i*m<=n;i++)
        count++;
    for(;;i++)
    {
        if(i*m<=count)
            count++;
        else
            break;
    }
    cout<<count;
    return 0;
}