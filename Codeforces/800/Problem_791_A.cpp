/*
Problem: 791-A Bear and Big Brother
Platform: Codeforces
Rating: 800
Topic: Implementation
*/
#include<iostream>
using namespace std;
int main()
{
    int a,b,count=0;
    cin>>a>>b;
    while(a<=b)
    {
        a*=3;
        b*=2;
        count++;
    }
    cout<<count;
    return 0;
}