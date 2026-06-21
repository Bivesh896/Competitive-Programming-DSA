/*
Problem: 996-A Hit the Lottery
Platform: Codeforces
Rating: 800
Topic: Greedy / Implementation
*/
#include <iostream>
using namespace std;
int main()
{
    int n,count=0,notes[] = {100, 20, 10, 5, 1};
    cin >> n;
    for(int i = 0; i < 5; i++)
    {
        count += n / notes[i];
        n %= notes[i];
    }
    cout<<count;
    return 0;
}