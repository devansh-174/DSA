#include <iostream>
using namespace std;
void BS(int a[], int starting_index , int end )
{
    int j = -1 ;
    
    while (end > starting_index)
    {
        int mid = (starting_index+end)/2 ;
        if(a[mid] == mid+1)
        {
            starting_index = mid+1 ;
        }
        else
        {
            j = mid+1 ;
            end = mid -1 ;
        }
    
    }
    if(j!=-1)
    {
        cout << "missing number in the array btw 1 to n is: " << j ;
    }
    else
    {
        cout << "there is no nuber missing between 1 to n" ;
    }
}

int main()
{
    int art[] = {1,2,3,4,5,6,8 , 9} ;
    int size = sizeof(art)/ sizeof(art[0]) ;

    BS(art , 0 ,size-1 )  ;
return 0 ;
}