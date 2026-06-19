/*
Problem: 1352-A Sum of Round Numbers
Platform: Codeforces
Rating: 800
Topic:  Implementation/Math
*/
#include<iostream>
using namespace std;
int main()
{   
    int t,n,i,count=0,*arr,*ans,j,k;
    cin>>t;
    arr = new int[t];
    ans = new int[t];
    for(i=0;i<t;i++)
    {
        count =0;
        cin>>n;
        arr[i] = n;
        while(n)
        {
            if(n%10 != 0)
                count++;
            n/=10;
        }
        ans[i] = count;
    }
    for(i=0;i<t;i++)
    {
        cout<<ans[i]<<endl;    
        j=1;
        while(arr[i])
        {
            if(arr[i]%10 != 0)
                cout<<(arr[i]%10*j)<<" ";
            arr[i]/=10;
            j *= 10;
        }
        cout<<endl;
            // if(arr[i]%10000 != 0)
            //     cout<<((arr[i]/10000)*10000)<<" ";
            // if(arr[i]%1000 != 0)
            //     cout<<(arr[i]%1000 - arr[i]%100)<<" ";
            // if(arr[i]%100 != 0)
            //     cout<<((arr[i]%100) - arr[i]%10)<<" ";
            // if(arr[i]%10 != 0)
            //     cout<<arr[i]%10;
    }
    delete []arr;
    delete []ans;
    return 0;
}