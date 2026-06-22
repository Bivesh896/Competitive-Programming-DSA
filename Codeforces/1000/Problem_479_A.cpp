/*
Problem: 479-A Expression
Platform: Codeforces
Rating: 1000
Topic: Math / Implementation
*/
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<max(a*b*c,max(a+b+c,max((a+b)*c,max(a*(b+c),max(a+b*c,a*b+c)))));
    return 0;
}