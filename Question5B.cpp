/*
Space required to store any two-dimensional array is number oƒ rows × number oƒ
columns. Assuming array is used to store elements of the following matrices,
implement an efficient way that reduces the space requirement.
Tri-diagonal Matrix.
*/
#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[3][3] = {1,8,0,7,2 ,5 ,0 , 5 , 9} ;
    vector<int> diagonal_element ;
    vector<int> lower_element ;
    vector<int> upper_element ;

    for(int i = 0 ; i < 3 ; i++)
    { 
        if(i>0)
        {
            lower_element.push_back(arr[i][i-1]) ;
        }
        diagonal_element.push_back(arr[i][i]) ;
        if (i < 2) // here 2 will be replaced by the total no column-1 according to needs
        {
            upper_element.push_back(arr[i][i+1]) ;
        }
    }

    cout << "elements in diagnol matrix are: " << endl ;
    for (int j = 0 ; j < diagonal_element.size() ; j++)
    {
        cout << diagonal_element.at(j) << " is at " << j << "th row and " << j << "th column" << endl;
    }
    for (int j = 0 ; j < lower_element.size() ; j++)
    {
        cout << lower_element.at(j) << " is at " << j+1 << "th row and " << j << "th column" << endl;
    }
    for (int j = 0 ; j < upper_element.size() ; j++)
    {
        cout << upper_element.at(j) << " is at " << j << "th row and " << j+1 << "th column" << endl;
    }
    cout << "rest elements of the matrix are equal to zero" << endl ;
    return 0 ;
}
   
