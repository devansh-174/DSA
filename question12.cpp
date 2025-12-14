/*
Sort an array of 0s, 1s and 2s - Dutch National Flag Problem
Given an array arr[] consisting of only 0s, 1s, and 2s. The objective is to sort the array, i.e.,
put all 0s first, then all 1s and all 2s in last.
*/
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> p = {0,0,1,2,0,1,0,2,0,1} ;
    sort(p.begin(), p.end()) ;
    cout << "Sorted array is: " << endl ;
     for(int i = 0; i < p.size(); i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;
return 0 ;
}