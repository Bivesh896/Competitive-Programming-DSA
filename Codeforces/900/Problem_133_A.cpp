/*
Problem: 133-A HQ9+
Platform: Codeforces
Rating: 900
Topic: Implementation
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,j=0;
    char check[]={'H','Q','9'};
    string s;
    cin>>s;
    for(char ch:s)
        for(i=0;i<3;i++)
            if(ch == check[i])
                j++;
    if(j!=0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}