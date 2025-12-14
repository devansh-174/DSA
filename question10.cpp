/*
You have an array A of integers of size N, an array B (initially empty) and a stack S (initially
empty). You are allowed to do the following operations:
a) Take the first element of array A and push it into S and remove it from A.
b) Take the top element from stack S, append it to the end of array B and remove it from S.
You have to tell if it possible to move all the elements of array A to array B using the above
operations such that finally the array B is sorted in ascending order.
*/

#include <iostream>
#include<vector>
#include<stack>
using namespace std;
int main()
{
    vector<int> A = {1,3,2,4} ;
    int N = A.size() ;
    vector<int> B ;
    stack<int> S ;
    for(int i = 0 ; i < N ; i++)
    {
        int temp = A[i] ;
        S.push(temp);
        A.pop_back();
        if(A[i]<A[i+1])
        {
            int k = S.top() ;
            B.push_back(k);
            S.pop();
        }
    }
return 0 ;
}