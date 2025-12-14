/*
A slightly improved selection sort – We know that selection sort algorithm takes the minimum on
every pass on the array, and place it at its correct position. The idea is to take also the maximum on
every pass and place it at its correct position. So in every pass, we keep track of both maximum and
minimum and array becomes sorted from both ends. Implement this logic.
*/
#include <iostream>
using namespace std;

void improvedSelectionSort(int arr[], int n)
{
    int left = 0;          
    int right = n - 1;     

    while (left < right)
    {
        int minIndex = left;
        int maxIndex = left;

        for (int i = left; i <= right; i++)
        {
            if (arr[i] < arr[minIndex])
                minIndex = i;

            if (arr[i] > arr[maxIndex])
                maxIndex = i;
        }

        swap(arr[left], arr[minIndex]);

        if (maxIndex == left)
            maxIndex = minIndex;

        swap(arr[right], arr[maxIndex]);

        left++;
        right--;
    }
}
