/*
Problem: 271-A Beautiful Year
Platform: Codeforces
Rating: 800
Topic:  BruteForce
*/
#include <iostream>
#include<set>
using namespace std;
int main() 
{
    int n,i,j;
    set<int> ans;
    cin>>n;
    for(i=n+1;;i++)
    {
        j=i;
        ans.insert(j%10);
        j/=10;
        ans.insert(j%10);
        j/=10;
        ans.insert(j%10);
        j/=10;
        ans.insert(j%10);
        if(ans.size()==4)
            break;
        ans.clear();
    }
    cout<<i;
    return 0;
}