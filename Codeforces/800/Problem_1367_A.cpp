/*
Problem: 1367-A Short Substrings
Platform: Codeforces
Rating: 800
Topic: String / Implementation 
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t,i,j;
    string s,*ans;
    cin>>t;
    cin.ignore();
    ans = new string[t];
    for(i=0;i<t;i++)
    {
        cin>>s;
        for(j=0;j<s.length()-1;j++)
        {
            ans[i].push_back(s[j]);
            j+=1;
        }
        ans[i].push_back(s[j-1]);
    }
    for(i=0;i<t;i++)
        cout<<ans[i]<<endl;
    delete []ans;
    return 0;
}
