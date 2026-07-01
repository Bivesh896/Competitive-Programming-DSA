/*
Problem: 746-B Decoding
Platform: Codeforces
Rating: 900
Topic:  Implementation/String
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,i,flag=0,j,k;
    cin>>n;
    string s1,s2;
    cin>>s1;
    s2 = s1;
    if(n%2 == 1)
    {
        j=0;
        for(i=0;i<n;i++)
        {
            if(flag)
            {
                s2[(n/2 - j)] = s1[i];
                flag = 0;
            }
            else
            {
                s2[(n/2 + j)] = s1[i];
                flag = 1;
                j++;
            }
        }
    }
    else
    {
        k = 0;
        j = 1;
        for(i=0;i<n;i++)
        {
            if(flag)
            {
                s2[(n/2 + k)] = s1[i];
                flag = 0;
                k++;
            }
            else
            {
                s2[(n/2 - j)] = s1[i];
                flag = 1;
                j++;
            }
        }
    }
    cout<<s2; 
    return 0;
}
