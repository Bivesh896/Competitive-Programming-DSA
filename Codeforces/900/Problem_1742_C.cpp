/*
Problem: 1742-C Stripes
Platform: Codeforces
Rating: 900
Topic:  Implementation
*/
#include<iostream>
using namespace std;
int main()
{
    int t,i,j,count,max;
    string s1[8];
    cin>>t;
    while(t--)
    {
        max = 0;
        count = 0;
        for(i=0;i<8;i++)
            cin>>s1[i];
        for(i=0;i<8;i++)
        {
            count = 0;
            for(j=0;j<8;j++)
            {
                if(s1[i][j] == 'R')
                    count++;
                else
                    break;
            }
            if(max<count)
                max = count; 
        }
        if(max == 8)
            cout<<"R"<<endl;
        else
            cout<<"B"<<endl;
    }
    return 0;
}
