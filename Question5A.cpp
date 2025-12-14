/*
Space required to store any two-dimensional array is number oƒ rows × number oƒ
columns. Assuming array is used to store elements of the following matrices,
implement an efficient way that reduces the space requirement.
(a) Diagonal Matrix.
*/
#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[3][3] = {1,0,0,0,2 ,0 ,0 , 0 , 9} ;
    vector<int> diagonal_element ;
    for(int i = 0 ; i < 3 ; i++)
    {
        diagonal_element.push_back(arr[i][i]) ;
    }
    cout << "elements in diagnol matrix are: " << endl ;
    for (int j = 0 ; j < 3 ; j++)
    {
        cout << diagonal_element.at(j) << " is at " << j << "th row and " << j << "th column" << endl;
    }
    cout << "rest elements of the matrix are equal to zero" << endl ;
    return 0 ;
}
   
