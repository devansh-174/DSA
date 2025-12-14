/*
Sort even-placed in increasing and odd-placed in decreasing order
We are given an array of n distinct numbers. The task is to sort all even-placed numbers in increasing

and odd-placed numbers in decreasing order. The modified array should contain all sorted even-
placed numbers followed by reverse sorted odd-placed numbers.

Note that the first element is considered as even placed because of its index 0.
*/

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int arr[] = {10, 3, 5, 2, 8, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    priority_queue<int, vector<int>, greater<int>> minHeap;

    priority_queue<int> maxHeap;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            minHeap.push(arr[i]);
        else
            maxHeap.push(arr[i]);
    }
    cout << "Modified array: ";
    while (!minHeap.empty())
    {
        cout << minHeap.top() << " ";
        minHeap.pop();
    }
    while (!maxHeap.empty())
    {
        cout << maxHeap.top() << " ";
        maxHeap.pop();
    }
    return 0;
}
