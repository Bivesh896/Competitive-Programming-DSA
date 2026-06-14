/*
Problem: 1703-A YES or YES?
Platform: Codeforces
Rating: 800
Topic:  Strings / Implementation / Brute-Force
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t,i;
    string s;
    string *ans;
    cin>>t;
    cin.ignore();
    ans = new string[t];
    for(i=0;i<t;i++)
    {
        cin>>s;
        if(s == "YES" || s =="Yes" || s == "yEs" || s == "yeS" || s == "YEs" || s == "yES" || s == "YeS" || s == "yes")//this is little faster.
            ans[i] = "YES";
        else
            ans[i] = "NO";
        // But below method convert string s to "YES" then checks it.
        // for(int j=0;j<3;j++)
        //     s[j] = toupper(s[j]);
        // if(s == "YES")
        //     ans[i] = "YES";
        // else
        //     ans[i] = "NO";   
    }
    for(i=0;i<t;i++)
        cout<<ans[i]<<endl;
    return 0;
}