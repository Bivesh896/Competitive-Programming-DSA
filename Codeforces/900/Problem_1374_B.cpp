/*
Problem: 1374-B Multiply by 2, divide by 6
Platform: Codeforces
Rating: 900
Topic: Math
*/
#include <iostream>
using namespace std;
int main() 
{
    int t,n,i,*ans;
    cin>>t;
    ans = new int[t];
    for(i=0;i<t;i++)
    {
        cin>>n;
        for(int j=0;;j++)
        {
            if(n%6==0 && n!=1)
                n/=6;
            else if(n%3==0 && n%2!=0)
                n*=2;
            else if(n!=1 && n%3!=0)
            {
                ans[i] = -1;
                break;
            }
            else
            {
                ans[i] = j;
                break;
            }
        }
    }
    for(i=0;i<t;i++)
        cout<<ans[i]<<endl;
    delete []ans;
    return 0;
}