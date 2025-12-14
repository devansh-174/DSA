/*
Write a program to implement the following operations on a Sparse Matrix,assuming
the matrix is represented using a triplet.
Addition of two matrices.
*/
#include <iostream>
using namespace std;
int main()
{
    int no_of_rows1 , no_of_columns1 ;
    cout << "Enter the number of rows for matrix"  << endl;
    cin >> no_of_rows1 ;
    cout << " enter the no of columns for matrix" << endl ;
    cin >> no_of_columns1 ;
    int arr1[no_of_rows1][no_of_columns1] , arr2[no_of_rows1][no_of_columns1] , arr3[no_of_rows1][no_of_columns1] ;
    for (int i = 0; i < no_of_rows1; i++) 
    {
        for (int j = 0; j < no_of_columns1; j++) 
        {
            cin >> arr1[i][j];
        }
    }
    for (int i = 0; i < no_of_rows1; i++) 
    {
        for (int j = 0; j < no_of_columns1; j++) 
        {
            cin >> arr2[i][j];
        }
    }
    int count = 0;

    for (int i = 0; i < no_of_rows1; i++) 
    {
        for (int j = 0; j < no_of_columns1; j++) 
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
            if (arr3[i][j] != 0) 
            {
                count++;
            }
        }
    }

    cout << no_of_rows1 << " " << no_of_columns1 << " " << count << endl;
    for (int i = 0; i < no_of_rows1; i++) 
    {
        for (int j = 0; j < no_of_columns1; j++) 
        {
            if (arr3[i][j] != 0) 
            {
                cout << i << " " << j << " " << arr3[i][j] << endl;
            }
        }
    }
    return 0;
}