/*
Problem: 1343-A Candies
Platform: Codeforces
Rating: 900
Topic: Math / Brute Force
*/
#include <iostream>
using namespace std;
int main() 
{
    int t,n,*x,i,j;
    long long y,denominator;
    cin>>t;
    x = new int[t];
    // i am using this loop to find x 
    // my initial thought was to run and find k but logically it would be very in efficient so what i did was 
    //so what i did is i found approximate value of k and got 30  so i took the limit as 49
    for(j=0;j<t;j++)
    {
        cin>>n;
        y=4;
        for(i=0;i<50;i++)
        {
            denominator = (y-1);
            if(n%denominator == 0)
                break;
            else
                y *= 2; 
        }
        if(i!=50)
            x[j] = n/denominator;
        else
            x[j] = n;
    }
    for(j=0;j<t;j++)
        cout<<x[j]<<endl;
    delete []x;
    return 0;
}