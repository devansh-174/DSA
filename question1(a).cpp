/*
Write a program to implement following sorting techniques:
a. Selection Sort
*/

#include<algorithm>
using namespace std ;
void selection_sort(int a[] , int n )
    {
        int mini_index ;
        for(int i = 0 ; i < n ; i++)
        {
            mini_index = i ;
            for(int j = i+1 ; j < n ; j++)
            {
                if(a[mini_index] > a[j])
                {
                    mini_index = j ;
                }
            }
            swap(a[mini_index],a[i]) ;
        }
    }