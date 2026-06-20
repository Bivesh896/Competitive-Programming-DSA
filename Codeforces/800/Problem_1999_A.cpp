/*
Problem: 1999-A A+B Again?
Platform: Codeforces
Rating: 800
Topic:  Math/Implementation
*/
#include<iostream>
using namespace std;
int main()
{
    int t;
    int *p;
    cin>>t;
    p = new int[t];
    for (int i = 0; i < t; i++)
        cin>>p[i];
    for (int i = 0; i < t; i++)
        cout<<(p[i]%10 + p[i]/10)<<endl;
    delete []p;
    return 0;
}