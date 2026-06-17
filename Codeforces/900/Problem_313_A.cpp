/*
Problem: 313-A Ilya and Bank Account
Platform: Codeforces
Rating: 900
Topic: Implementation / Number Theory
*/
#include<iostream>
using namespace std;
int main()
{
    int n,w1,w2;
    cin>>n;
    if(n>0)
    {
        cout<<n;
        return 0;
    }
    else
    {
        w1 = n/10;
        w2 = n%10 + (n/100)*10;
        if(w2>=w1)
        {
            cout<<w2;
            return 0;
        }
        else
        {
            cout<<w1;
            return 0;
        }
    }
}