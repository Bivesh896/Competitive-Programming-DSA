/*
Problem: 598-A Tricky Sum
Platform: Codeforces
Rating: 900
Topic:  Math
*/
#include<iostream>
using namespace std;
int main()
{
    int t;
    long long int n,sum,sub;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sub = 0;
        sum = (n*(n+1))/2;
        for(int i=1;i<=n;)
        {
            sub += i;
            i = i*2;
        }
        cout<<(sum-2*sub)<<endl;
    }
    return 0;
}
