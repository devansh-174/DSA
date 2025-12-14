/*
    merge sort
*/
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {8, 3, 4, 12, 5, 6}  ;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i < n ; i++)
    {
        int mid = n/2 ;
        int left[mid] ;
        for(int j = 0 ; j < mid ; j++)
        {
            left[j] = arr[j] ;
        }


    }

return 0 ;
}