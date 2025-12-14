/*
Write a program to implement the following operations on a Sparse Matrix,assuming
the matrix is represented using a triplet.
(A) Transpose of a matrix.
*/
#include <iostream>
using namespace std;
int main()
{
    int no_of_rows , no_of_columns ;
    cout << "Enter the number of rows"  << endl;
    cin >> no_of_rows ;
    int count = 0 ;
    cout << " enter the no of columns" << endl ;
    cin >> no_of_columns ;
    if ((no_of_columns > 0 ) && (no_of_rows > 0))
    {
        int arr[no_of_rows][no_of_columns] ;
    for (int i = 0 ; i < no_of_rows ; i++)
    {
        for (int j = 0 ; j < no_of_columns ; j++)
        {
            cin >> arr[i][j] ;
        }
    }
    int transponse_arr[no_of_columns][no_of_rows] ;
    for(int i = 0 ; i < no_of_rows ; i++)
    {
        for(int j = 0 ; j < no_of_columns ; j++)
        {
            transponse_arr[j][i] = arr[i][j] ;
            if (transponse_arr[j][i] != 0)
            {
                count++ ;
            }
        }
    }
    cout << no_of_columns << " " << no_of_rows << " " << count << endl ;
    for (int k = 0 ; k < no_of_columns ; k++)
    {
        for(int p = 0 ; p < no_of_rows ; p++)
        {
            if(transponse_arr[k][p] != 0)
            {
                cout << k << " " << p << " " << transponse_arr[k][p] ;
                cout << endl ;
            }
        }
    }
    }
    else{
        cout << "enter valid inputs " << endl; 
    }
        return 0 ;
}
