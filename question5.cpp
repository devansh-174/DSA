/*
Maximum Sum Combination
You are given two integer arrays a[ ] and b[ ] of equal size. A sum combination is formed by adding
one element from a[ ] and one from b[ ], using each index pair (i, j) at most once. Return the
top k maximum sum combinations, sorted in non-increasing order.
*/
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int a[] = {4, 2, 5, 1};
    int b[] = {8, 0, 3, 5};
    int n = 4;
    int k = 3;

    priority_queue<int> pq;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            pq.push(a[i] + b[j]);
        }
    }

    cout << "Top " << k << " sums: ";
    for (int i = 0; i < k; i++)
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}
