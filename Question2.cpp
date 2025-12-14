/*
Given a string, reverse it using STACK. For example “DataStructure” should be output as
“erutcurtSataD.”
*/

#include <iostream>
#include<string>
#include<stack>
using namespace std;
void input_of_string(stack<char> &p  , string s)
{
    for(auto j = 0 ; j < s.size() ; j++)
    {
        p.push(s[j]);
    }
}
void display(stack<char> &p  , string s)
{
    int k = s.size() ;
    for(auto i = 0 ; i < k ; i++)
    {
        cout << p.top();
        p.pop() ;
    }
}
int main()
{
    string s = "DataStructure" ;
    int k = s.size() ;
    stack<char> p ;
    input_of_string(p, s) ;
    display( p  ,  s) ;
return 0 ;
}