/*
Problem: 1699-A Boy or Girl
Platform: Codeforces
Rating: 800
Topic:  Implementation
*/
#include<iostream>
#include<string>
#include<set>
using namespace std;
int main()
{
    string S;
    set<char> s2;
    getline(cin,S);
    for(char ch:S)
        s2.insert(ch);
    if(s2.size()%2 != 0)
        cout<<"IGNORE HIM!";
    else
        cout<<"CHAT WITH HER!";
    return 0;
}