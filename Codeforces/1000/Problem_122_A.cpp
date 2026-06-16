/*
Problem: 122-A Lucky Division
Platform: Codeforces
Rating: 1000
Topic:  Implementation / Math
*/
#include<iostream>
using namespace std;
int main()
{
    int n,lucky[] = {4,7,47,74,447,474,477,747,774};//Just Look in the question it has asked we have to divide by lucky Numbers not Digits
    cin>>n;
    for(int L:lucky)
    {
        if(n%L == 0)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}