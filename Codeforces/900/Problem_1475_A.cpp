/*
Problem: 1475-A Odd Divisor
Platform: Codeforces
Rating: 900
Topic: Math / Number Theory
*/
#include<iostream>
using namespace std;
int main()
{
    int t,i,j;
    long long int n;
    string *s;
    cin>>t;
    s = new string[t];
    for(j=0;j<t;j++)
    {
        cin>>n;
        while(n%2 == 0)
            n/=2;
        if(n>1)
            s[j] = "YES";
        else
            s[j] = "NO";
    }
    for(j=0;j<t;j++)
        cout<<s[j]<<endl;
    delete []s;
    return 0;
}