/*
Problem: 490-A Team Olympiad
Platform: Codeforces
Rating: 800
Topic: String / Implementation 
*/
#include<iostream>
using namespace std;
int main()
{
    int t,*arr,count1=0,count2=0,count3=0,i,ans,*a,*b,*c,j=0;
    cin>>t;
    arr = new int[t];
    for(i=0;i<t;i++)
    {
        cin>>arr[i];
        if(arr[i] == 1)
            count1++;
        else if(arr[i] == 2)
            count2++;
        else
            count3++;
    }
    ans = (count1>count2?(count2>count3?count3:count2):(count1>count3?count3:count1));
    cout<<ans<<endl;
    a = new int[ans];
    b = new int[ans];
    c = new int[ans];
    for(i=0;i<ans;i++)
    {
        for(int j=0;j<t;j++)
            if(arr[j]==1 && i<ans)
            {
                a[i] = j+1;
                i++;
            }
    }
    for(i=0;i<ans;i++)
    {
        for(int j=0;j<t;j++)
            if(arr[j]==2 && i<ans)
            {
                b[i] = j+1;
                i++;
            }
    }
    for(i=0;i<ans;i++)
    {
        for(int j=0;j<t;j++)
            if(arr[j]==3 && i<ans)
            {
                c[i] = j+1;
                i++;
            }
    }
    for(i=0;i<ans;i++)
    {
        cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<endl;
    }
    delete []arr;
    delete []a;
    delete []b;
    delete []c;
    return 0;
}
