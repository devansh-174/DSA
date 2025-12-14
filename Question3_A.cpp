/*
Design the Logic to Find a Missing Number in a Sorted Array. 
Given an array of n-1 distinct integers in the range of 
1 to n, find the missing number in it in a Sorted Array
*/
/*
(a) Linear time
*/
#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> p  = {1,2,3,4,6,7,8} ;

    for (int j = 0 ; j < p.size() ; j++)
    {
        if (p.at(j)!=j+1)
        {
            cout << j+1 << " is the missing Number" << endl ;
            break ;
        }
    }
return 0 ;
}