/*
Problem: 469-A I Wanna Be the Guy
Platform: Codeforces
Rating: 800
Topic: Implementation/Greedy
*/
#include <iostream>
#include<set>
using namespace std;
int main()
{
    int n,p,q,i,*a,*b;
    set <int> ans;
    cin>>n;
    cin>>p;
    a = new int[p];
    for(i=0;i<p;i++)
    {
        cin>>a[i];
        ans.insert(a[i]);
    }
    cin>>q;
    b = new int[q];
    for(i=0;i<q;i++)
    {
        cin>>b[i];
        ans.insert(b[i]);
    }
    if(ans.size() == n)
        cout<<"I become the guy.";
    else
        cout<<"Oh, my keyboard!";
    delete []a;
    delete []b;
    return 0;
}