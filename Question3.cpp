#include<iostream>
#include<stack>
#include<vector>
#include<string>
using namespace std ;
class Solution {
public:
    bool isValid(string s) {
    stack<int> p ;
    vector<int> temp ;
    for(auto c : s)
    {
        if(c == '(' ) temp.push_back(1);
        if(c == '{' ) temp.push_back(2);
        if(c == '[' ) temp.push_back(3);
        if(c == ')' ) temp.push_back(-1);
        if(c == '}' ) temp.push_back(-2);
        if(c == ']' ) temp.push_back(-3);
    }
    for (auto i = 0 ; i < temp.size() ; i++)
    {
        if(!p.empty() && temp[i] == -p.top() && (temp[i]<=0))
        {
            p.pop() ;
        }
        else
        {
            p.push(temp[i]) ;
        }
    }
    bool check = true ;
    if (!p.empty())
    {
        check = false ;
    }
    if (check == true)
    {
        return true ;
    }
    else{
        return false ;
    }
    }
};
int main()
{
    string check = "{[()]}" ;
    Solution sol ;
    int k = sol.isValid(check) ;
    cout << k << endl ;
}