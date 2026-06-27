/*
Problem: 510-A Fox And Snake
Platform: Codeforces
Rating: 800
Topic: Implementation / Pattern Printing
*/
#include <iostream>
using namespace std;
int main()
{
    int n,m,i,j,flag=0,k;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        k=1;
        flag = 0;
        for(j=1;j<=m;j++)
        {
            if(i%2 == 1)
            {
                cout<<"#";
            }
            else
            {
                if (i%4 == 0 && j == 1)
                    cout<<"#";
                else if (i%2 == 0 && flag == m-1)
                    cout<<"#";
                else
                {
                    cout<<".";
                    flag++;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}