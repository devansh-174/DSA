/*
Space required to store any two-dimensional array is number oƒ rows × number oƒ
columns. Assuming array is used to store elements of the following matrices,
implement an efficient way that reduces the space requirement.
(E)Symmetric Matrix
*/
#include<iostream>
#include<vector>
using namespace std ;
int main()
{
    int arr[3][3] = {1,8,0,8,2 ,5 ,0 , 5 , 9} ;
    vector<int> elements ;
    int index = 0 ;
    for(int i = 0 ; i < 3 ; i++)
    { 
        for (int j = 0 ; j <= i ; j++)
        {
            elements.push_back(arr[i][j]) ;
        }
    }
    int k ;
    int reconstruct[3][3] ;
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j <= i ; j++)
        {
            reconstruct[i][j] = elements[index]  ;
            reconstruct[j][i] = elements[index] ;
            if (i!=j)
            {
                cout << elements[index] << " is at " << j+1 << "th row and " << i+1 << "th column" << endl;
            }
            cout << elements[index] << " is at " << i+1 << "th row and " << j+1 << "th column" << endl;
            index++ ;
        }
    }
    cout << "element at postion when row and column interchange remain same i.e arr[i][j] = arr[j][i]" << endl ;
}
