/*
Problem: 1154-A Restoring Three Number
Platform: Codeforces
Rating: 800
Topic:  Math
*/
#include<iostream>
using namespace std;
int main()
{
    long long int ptr[4],max,j=0;
    cin>>ptr[0]>>ptr[1]>>ptr[2]>>ptr[3];
    max = (ptr[0]+ptr[1]+ptr[2]+ptr[3])/3;
    for(int i=0;i<4;i++)
        if(ptr[i] != max)
            cout<<(max-ptr[i])<<" ";
    return 0;
}