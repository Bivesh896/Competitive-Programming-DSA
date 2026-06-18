/*
Problem: 431-A Black Square
Platform: Codeforces
Rating: 800
Topic: Implementation
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a,b,c,d,sum=0;
    string s;
    cin>>a>>b>>c>>d;
    cin.ignore();
    cin>>s;
    for(char ch:s)
    {
        if(ch == '1')
            sum+=a;
        else if(ch == '2')
            sum+=b;
        else if(ch == '3')
            sum+=c;
        else
            sum+=d;
    }
    cout<<sum;
    return 0;
}
