/*
Problem: 1360-B Honest Coach
Platform: Codeforces
Rating: 800
Topic: String / Implementation 
*/
//I have not learned STL so i havent use the best possible way
#include<iostream>
using namespace std;
int main()
{
    int t,n,*s,*ans,i,j,mindiff,diff,k,temp;
    cin>>t;
    ans = new int[t];
    for(i=0;i<t;i++)
    {
        cin>>n;
        s = new int[n];
        for(j=0;j<n;j++)
            cin>>s[j];
        mindiff = 1000;
        for(j=0;j<n-1;j++)
        {
            for(k=0;k<n-1;k++)
            {
                if(s[k]>s[k+1])
                {
                    temp = s[k];
                    s[k] = s[k+1];
                    s[k+1] = temp;
                }
            }
        }
        for(j=0;j<n-1;j++)
        {
            diff = s[j]>s[j+1]?(s[j]-s[j+1]):(s[j+1]-s[j]);
            if(mindiff>diff)
                mindiff = diff;
        }
        ans[i] = mindiff;
        delete []s;
    }
    for(i=0;i<t;i++)
        cout<<ans[i]<<endl;
    delete []ans;
    return 0;
}
