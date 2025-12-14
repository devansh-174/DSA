/*
Top K Frequent in Array
Given a non-empty integer array arr[ ] of size n, find the top k elements which have the highest
frequency in the array. Note: If two numbers have the same frequencies, then the larger
number should be given more preference.
*/
#include <iostream>
#include <unordered_map>
#include <queue>
using namespace std;

int main()
{
    int arr[] = {1, 1, 1, 2, 2, 3, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    priority_queue<pair<int, int>> pq;

    for (auto it : freq)
    {
        pq.push({it.second, it.first});
    }

    cout << "Top " << k << " frequent elements: ";
    for (int i = 0; i < k; i++)
    {
        cout << pq.top().second << " ";
        pq.pop();
    }

    return 0;
}
