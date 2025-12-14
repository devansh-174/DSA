/*
Let A[1 .... n] be an array of n real numbers. A pair (A[i], A[j ]) is 
said to be an inversion if these numbers are out of order, i.e., 
i < j but A[i]>A[j]. Write a program to count the number of inversions 
in an array.
*/
#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector <int> p = {4,2,5,2,7,8,4,1,0};

    int count = 0; 
    for (int i = 0 ; i < p.size() ; i++)
    {
        for (int j = i+1 ; j < p.size() ; j++)
        {
            if(p.at(i)>p.at(j))
            {
                count++;
            }
        }
    }
    cout << count <<" is the total number of inversions in the array" << endl ;
    return 0;
}
