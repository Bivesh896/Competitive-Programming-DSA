/*
Problem: 228-A Is Your HorseShoe on the Other Roof?
Platform: Codeforces
Rating: 800
Topic: Set / Implementation
*/
#include <iostream>
#include <set>
using namespace std;

int main()
{
    int a,b,c,d;
    set<int> s2;
    cin>>a>>b>>c>>d;
    s2.insert(a);
    s2.insert(b);
    s2.insert(c);
    s2.insert(d);
    cout<<(4-s2.size());
    return 0;
}