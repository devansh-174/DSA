/*
Implement the Binary search algorithm regarded as a fast search algorithm with
run-time complexity of Ο(log n) in comparison to the Linear Search.
*/
#include <iostream>
int BS(int a[], int starting_index , int end , int k)
{
    int mid = (starting_index+end)/2 ;
    if(a[mid] == k)
    {
        return mid ;
    }
    else if (starting_index > end )
    {
        return -1 ;
    }
    else if (a[mid]<k)
    {
        return BS(a , mid+1 , end , k ) ;
    }
    else
    {
        return BS(a , starting_index , mid-1 , k ) ;
    }
}
using namespace std;
int main()
{
    int art[] = {1,3,4,5,7,9,12,15} ;
    int size = sizeof(art)/ sizeof(art[0]) ;
    int key = 3 ;
    cout << "value input " << key << " lies at " << BS(art , 0 ,size-1 , key) << " index" << endl ;
return 0 ;
}