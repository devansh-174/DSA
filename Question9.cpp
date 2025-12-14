/*
Find two numbers in an array whose difference equals K. Given an array arr[] and a
positive integer k, the task is to count all pairs (i, j) such that i < j and 
absolute value of (arr[i] - arr[j]) is equal to k.
*/
#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector <int> p = {4,2,5,2,7,8,4,1,0};
    int key = 2 ;
    int count = 0; 
    for (int i = 0 ; i < p.size() ; i++)
    {
        for (int j = i+1 ; j < p.size() ; j++)
        {
            if(abs(p.at(i)-p.at(j))==key)
            {
                count++ ;
            }
        }
    }
    cout << count <<" is the total number of pair in the array whose difference is" << key << endl ;
    return 0;
}
