/*
Problem: 96-A Football
Platform: Codeforces
Rating: 900
Topic: Strings / Implementation
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int count,j;
    string s;
    cin>>s;
    if(s.length() < 7)
    {
        cout<<"NO";
        return 0;
    }
    // Why i wrote this if(s.length()<7) ?
    // because if you can see that if length of string s is less than 7 (Assume it's  s.length() is 6 ) then (s.length()-7) will give -1
    // and the condition will be (i=0;i<-1;i++) which will be false and the cout<<"NO"; will work directly but it doesn't happen Why?
    //But in C++, s.length() returns an unsigned value, not int.
    //Unsigned values cannot become negative.
    // So instead of becoming -1, it becomes a very large positive number.
    // Because of that, the loop runs and s[i+j] can go out of bounds.
    // Therefore, we first check if the string length is less than 7.
    // If yes, we directly print "NO" and stop the program.
    // or else we can do is create an int variable name len;
    // then len = s.length();
    // and for for loop condition let it be for(i=0;i<=len-7;i++)
    // here the loop will work perfectly
    else
    {
        for(int i=0;i<=s.length()-7;i++)
        {
            j=0;
            count=0;
            while(j<7)
            {
                if(s[i] == s[i+j])
                    count++;
                j++;
            }
            if(count == 7)
            {
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}