/*
Problem: 151-A Soft Drinking
Platform: Codeforces
Rating: 800
Topic: Math / Implementation
*/
#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np,ntoast_soft,ntoast_lime,ntoast_salt;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    ntoast_soft = (k*l)/nl;
    ntoast_lime = c*d;
    ntoast_salt = p/np;
    cout<<(min(ntoast_lime,(min(ntoast_salt,ntoast_soft)))/n);
    return 0;
}