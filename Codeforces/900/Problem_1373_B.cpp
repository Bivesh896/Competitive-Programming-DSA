/*
Problem: 1373-B 01 Game
Platform: Codeforces
Rating: 900
Topic: Games
*/
#include <iostream>
#include<string>
using namespace std;
int main() 
{
    int t,i,count_1=0,count_0=0,*ans;
    string s;
    cin>>t;
    ans = new int[t];
    for(i=0;i<t;i++)
    {
        count_0 = 0;
        count_1 = 0;
        cin>>s;
        for(int j=0;j<s.length();j++)
        {
            if(s[j] == '1')
                count_1++;
            else
                count_0++;
        }
        ans[i] = ((count_0>count_1?count_1:count_0)%2);
    }
    for(i=0;i<t;i++)
    {
        if(ans[i] == 1)
            cout<<"DA"<<endl;
        else
            cout<<"NET"<<endl;
    }
    delete []ans;
    return 0;
}