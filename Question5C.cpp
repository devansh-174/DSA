/*
Space required to store any two-dimensional array is number oƒ rows × number oƒ
columns. Assuming array is used to store elements of the following matrices,
implement an efficient way that reduces the space requirement.
Lower triangular Matrix.
*/
#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[3][3] = {1,8,0,7,2 ,5 ,0 , 5 , 9} ;
    vector<int> elements ;
    int index = 0 ;
    for(int i = 0 ; i < 3 ; i++)
    { 
        for (int j = 0 ; j <= i ; j++)
        {
            elements.push_back(arr[i][j]) ;
        }
    }
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j <= i ; j++)
        {
            cout << elements[index] << " is at " << i+1 << "th row and " << j+1 << "th column" << endl;
            index++ ;
        }
    }
    cout << "rest elements of the matrix are equal to zero" << endl ;
    return 0 ;
}
   
