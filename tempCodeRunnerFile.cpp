//Q4 Next Greater Temperature

/*

Given an array of integers temperatures represents the daily temperatures, return an
array answer such that answer[i] is the number of days you have to wait after the ith day to get a
warmer temperature. If there is no future day for which this is possible, keep answer[i] == 0 instead.

*/

/*
#include <iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int>nextgreaterele(vector<int>&nums)
{
int n=nums.size();
vector<int>ngt(n,0);
stack<int>st;
for(int i=n-1;i>=0;i--)
{
while(!st.empty() && nums[st.top()]<=nums[i])
{
    st.pop();
}
if(!st.empty())
ngt[i]=st.top()-i;
st.push(i);
}
return ngt;
}
int main()
{
vector < int > v = {25,17,11,22,16,50};
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


#include <iostream>
#include<stack>
#include<vector>
using namespace std;
void number_of_days(vector<int> p)
{
    int n = p.size() ;
    vector<int> answer ;
    for(int i = 0 ; i < n-1 ; i++)
    {
        int count = 0 ; 
        for(int j = i+1 ; j < n ; j++)
        {
            if(p[j]<p[i])
            {
                count++;
            }
            else if(p[j]>p[i])
            {
                break;
            }
        }
        answer.push_back(count) ;
    }

    for(int i = 0 ; i< n ; i++)
    {
        cout<< answer[i] << " " ;
    }
    
}
int main()
{
    vector < int > v = {25,17,11,22,16,50};
    number_of_days(v) ;
return 0 ;
}