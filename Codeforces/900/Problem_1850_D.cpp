/*
Problem: 1850-D Balanced Round
Platform: Codeforces
Rating: 900
Topic: Implementation
*/
#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
    int t,n,k,i,j,ki,max,temp=0,*a,*ans;
    cin>>t;
    ans = new int[t];
    for(i=0;i<t;i++)
    {
        cin>>n>>k;
        a = new int[n];
        for(j=0;j<n;j++)
            cin>>a[j];
        sort(a, a+n);
        temp = 0;
        max = 0;
        for(j=0;j<n-1;j++)
        {
            if(k>=a[j+1]-a[j])
                temp++;
            else
            {
                if(temp>max)
                    max = temp;
                temp = 0;
                continue;
            }
        }
        if(temp>max)
            max = temp;
        ans[i] = n-max-1;
        delete []a;
    }
    for(i=0;i<t;i++)
        cout<<ans[i]<<endl;
    delete []ans;
    return 0;
}