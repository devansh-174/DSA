/*
Given a fixed-length integer array arr, duplicate each occurrence of two (2), shifting the
remaining elements to the right.
Note that elements beyond the length of the original array are not written. Do the above
modifications to the input array in place and do not return anything.
*/

// using extra space 

/*
#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr = {3,4,1,2,3,4,2,4,2} ;
    int key = 2 ;
int k = arr.size() ;
    vector <int> news ;
    
    for (int i = 0 ; i < k ; i++)
    {
        if(arr.at(i)!=key)
        {
            news.push_back(arr.at(i)) ;
        }
        else{
            news.push_back(arr.at(i)) ;
            news.push_back(2) ;
        }
    }
    for (int j = 0 ; j < k ; j++)
    {
        arr.at(j) = news.at(j) ;
         cout << arr.at(j) << " ";
    }
    
    cout << endl;
return 0 ;
}
*/

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3,4,1,2,3,4,2,4,2} ;
    int key = 2 ;
int k = sizeof(arr)/sizeof(arr[0]) ;
    for(int i = 0 ; i < k ; i++)
    {
        if (arr[i]== key)
        {
            for (int j = k-1 ; j > i ; j--)
            {
                arr[j] = arr[j-1] ;
            }
            arr[i+1] = 2 ;
            i++ ;
        }
    }
    for (int p = 0 ; p < k ; p++)
    {
        cout << arr[p] << " " ;
    }
return 0 ;
}