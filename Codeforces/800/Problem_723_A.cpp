/*
Problem: 723-A The New Year: Meeting Friends
Platform: Codeforces
Rating: 800
Topic: Math / Implementation / Sortings
*/
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b,c,mid;
    cin>>a>>b>>c;
    mid = a+b+c - (max(a,max(b,c))+min(a,min(b,c)));
    cout<<((max(a,max(b,c))-mid)+mid-min(a,min(b,c)));
    return 0;
}