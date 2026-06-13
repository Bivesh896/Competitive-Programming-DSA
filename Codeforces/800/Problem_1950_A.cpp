/*
Problem: 1950-A Stair, Peak, or Neither?
Platform: Codeforces
Rating: 800
Topic: Implementation / Conditionals
*/
#include <iostream>
#include<string>
using namespace std;
int main() 
{
    int t,a,b,c;
    string *s;
    cin>>t;
    s = new string[t];
    for(int i=0;i<t;i++)
    {
        cin>>a>>b>>c;
        if(b>a && c>b)
            s[i] = "STAIR";
        else if(b>a && b>c)
            s[i] = "PEAK";
        else    
            s[i] = "NONE";
    }
    for(int i=0;i<t;i++)
        cout<<s[i]<<endl;
    delete []s;
    return 0;
}