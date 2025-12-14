//Q6 Previous Smaller Element

#include <iostream>
#include<vector>
#include<stack>
using namespace std;
void previoussmaller(vector<int>&arr)
{
    stack<int>result ;
    int n = arr.size() ;
    for(int i = 0 ; i < n ;i++)
    {
       if(i==0)
       {
        result.push(-1) ;
        continue ;
       } 
        int input = -1 ;
        for(int j = i-1 ; j > -1 ;j--)
        {
            if(arr[j]<arr[i])
            {
                input = arr[j] ;
                break ;
            }
        }
        result.push(input) ;
    }
    stack<int> answer ;
    for(int k = 0 ; k < n ; k++)
    {
        int s = result.top() ;
        answer.push(s) ;
        result.pop() ;
    }
    while(!answer.empty())
    {
        int p = answer.top() ;
        cout << p << " " ;
        answer.pop() ;
    }
}
int main()
{
    vector<int> arr = {5,7,1,2,6,0} ;
    vector<int> res ;
    cout << "the next smaller elements are: " << endl ;
    previoussmaller(arr) ;
return 0 ;
}