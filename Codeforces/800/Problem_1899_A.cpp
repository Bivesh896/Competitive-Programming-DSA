/*
Problem: 1899-A Game with Integers
Platform: Codeforces
Rating: 800
Topic: Math / Game Theory
*/
// Problem 1899A Game with Integers
#include<iostream>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    int *N;
    N = new int[t];
    for ( i = 0; i < t; i++)
        cin>>N[i];
    for ( i = 0; i < t; i++)
    {
        if(N[i]%3 == 0)
            cout<<"Second"<<endl;
        else
            cout<<"First"<<endl;
    }
    delete []N;
    return 0;
}
    
