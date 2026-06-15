/*
Problem: 785-A Anton and Polyhedrons
Platform: Codeforces
Rating: 800
Topic:  Strings / Implementation
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,answer=0;
    string s12;
    cin>>n;
    while(n--)
    {
        cin>>s12;
        if (s12 == "Cube")
            answer += 6;
        else if (s12 == "Tetrahedron")
            answer += 4;
        else if(s12 == "Octahedron")
            answer += 8;
        else if (s12 == "Dodecahedron")
            answer += 12;
        else
            answer +=20;
    }
    cout<<answer;
    return 0;
}