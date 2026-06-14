/*
Problem: 116-A Tram
Platform: Codeforces
Rating: 800
Topic:  Implementation
*/
#include <iostream>
using namespace std;
int main() 
{
    int n,people=0,a,b,capacity=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        people = people + b - a;
        if(people > capacity)
            capacity = people;
    }
    cout<<capacity;
    return 0;
}