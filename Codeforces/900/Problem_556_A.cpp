/*
Problem: 556-A Case of the Zeros and Ones
Platform: Codeforces
Rating: 900
Topic: Greedy
*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,count_1=0,count_0=0,total;
    string s;
    cin>>n;
    cin>>s;
    for(i=0;i<s.length();i++)
    {
        if(s[i] == '1')
            count_1++;
        else
            count_0++;
    }
    total = min(count_1,count_0);
    cout<<(n-2*total);
    return 0;
}