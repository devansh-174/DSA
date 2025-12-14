//Q3 NEXT GREATER ELEMENT (MONOTONIC FORM) IN STACK

/*

Given an array arr[ ] of integers, the task is to find the Next Greater Element for each element of the
array in order of their appearance in the array. Note: The Next Greater Element for an element x is
the first greater element on the right side of x


*/


// better approch 
/*
#include <iostream>
#include<stack> 
#include<vector>
using namespace std;

vector<int>nextgreaterele(vector<int>&nums)
{
int n=nums.size();
vector<int>nge(n,-1);
stack<int>st;
for(int i=n-1;i>=0;i--)
{
while(!st.empty() && st.top()<=nums[i])
{
    st.pop();
}
if(!st.empty())
nge[i]=st.top();
st.push(nums[i]);
}
return nge;
}
// int main()
{
vector < int > v {5,7,1,2,6,0};
vector < int > res = nextgreaterele(v);
cout << "The next greater elements are" << endl;
for (int i = 0; i < res.size(); i++) 
{
cout << res[i] << " ";
}
return 0;
}

*/
//TC/SC-O(N)

// first approch
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void the_next_greater_element(vector<int> p)
{
    int n = p.size() ;
    stack<int> temp ;
    for(int j = 0 ; j < n ; j++)
    {
        int input = -1 ;
        for(int k = j+1 ; k <n ; k++ )
        {
            if(p.at(k)>p.at(j))
            {
                input = p.at(k) ;
                break ;
            }
        }
        temp.push(input) ;
    }
    stack<int>temp1 ;
     for(int i = 0 ; i < p.size() ; i++)
    {
        int j = temp.top() ;
        temp1.push(j) ;
        temp.pop() ;
    }
    for(int i = 0 ; i < p.size() ; i++)
    {
        int j = temp1.top() ;
        cout << j << " " ;
        temp1.pop() ;
    }
} 
int main()
{
    vector<int> v = {5,7,1,2,6,0};
    cout << "the current array is: " << endl ;
    for(int i = 0 ; i < v.size() ; i++)
    {
        cout << v.at(i) << " " ;
    }
    cout << "The next greater elements are" << endl;
    the_next_greater_element(v) ;
}