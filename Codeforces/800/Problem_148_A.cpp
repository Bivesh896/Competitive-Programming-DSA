/*
Problem: 148-A Insomnia cure
Platform: Codeforces
Rating: 800
Topic: Constructive Algorithms / Math / Implementation 
*/
#include<iostream>
#include<set>
using namespace std;
int main()
{
    int k,l,m,n,d,i;
    set <int> a;
    cin>>k>>l>>m>>n>>d;
    if(k == 1 || l == 1 || m == 1 || n == 1 )
    {
        cout<<d;
        return 0;
    }
    else
    {
        for(i=1;k*i<=d;i++)
            a.insert(k*i);
        for(i=1;l*i<=d;i++)
            a.insert(l*i);
        for(i=1;m*i<=d;i++)
            a.insert(m*i);
        for(i=1;n*i<=d;i++)
            a.insert(n*i);
    }
    cout<<a.size();
    return 0;
}