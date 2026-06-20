/*
Problem: 427-A Police Recruits
Platform: Codeforces
Rating: 800
Topic:  Implementation
*/
#include<iostream>
using namespace std;
int main()
{
    int n,police = 0,untreated = 0,l; 
    int *q;
    cin>>n;
    while(n--)
    {
        cin>>l;
        if(l == -1)
        {
            if(police == 0)
                untreated++;
            else
                police--;
        }
        else
            police+=l;   
    }
    delete []q;
    cout<<untreated;
    return 0;
}