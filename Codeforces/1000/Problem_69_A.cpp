/*
Problem: 69-A Young Physicist
Platform: Codeforces
Rating: 1000
Topic:  Implementation / Math
*/
#include<iostream>
using namespace std;
int main()
{
    int n,sumx=0,sumy=0,sumz=0,i;
    int *x,*y,*z;
    cin>>n;
    x = new int[n];
    y = new int[n];
    z = new int[n];
    for(i=0;i<n;i++)
    {
        cin>>x[i]>>y[i]>>z[i];
        sumx+=x[i];
        sumy+=y[i];
        sumz+=z[i];
    }
    delete []x;
    delete []y;
    delete []z;
    if(sumx == 0 && sumy == 0 && sumz == 0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}