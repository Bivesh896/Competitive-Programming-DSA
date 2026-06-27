/*
Problem: 26-A Almost Prime
Platform: Codeforces
Rating: 900
Topic: Number Theory
*/
#include <iostream>
using namespace std;
int main() 
{
    int n,i,j,k,count,ans=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        count = 0;
        for(j=2;j<i;j++)
        {
            if(i%j == 0)
            {
                for(k=2;k<=j/2;k++)
                {
                    if(j%k==0)
                        break;
                }
                if(2*k>j)
                    count++;
            }
        }
        if(count == 2)
            ans++;
    }
    cout<<ans;
    return 0;
}