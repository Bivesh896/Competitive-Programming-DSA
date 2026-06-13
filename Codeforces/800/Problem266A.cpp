/*
Problem: 266-A Stones on the Table
Platform: Codeforces
Rating: 800
Topic: Strings / Implementation
*/
#include <iostream>
#include<string>
using namespace std;
int main() 
{
    int n,count=0,i;
    string s;
    cin>>n;
    cin>>s;
    for(i=0;i<s.length()-1;i++)
        if(s[i] == s[i+1])
            count++;
    cout<<count;
    return 0;
}