/*
Maximum Ice Cream Bars
It is a sweltering summer day, and a boy wants to buy some ice cream bars.
At the store, there are n ice cream bars. You are given an array costs of length n, where costs[i] is the
price of the ith ice cream bar in coins. The boy initially has coins to spend, and he wants to buy as
many ice cream bars as possible.
Note: The boy can buy the ice cream bars in any order.
Return the maximum number of ice cream bars the boy can buy with coins.
You must solve the problem by counting sort.
*/

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int costs[] = {1, 3, 2, 4, 1};
    int coins = 7;
    int n = sizeof(costs) / sizeof(costs[0]);

    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (int i = 0; i < n; i++)
        minHeap.push(costs[i]);

    int count = 0;

    while (!minHeap.empty() && coins >= minHeap.top())
    {
        coins -= minHeap.top();
        minHeap.pop();
        count++;
    }

    cout << "Maximum ice cream bars: " << count;
    return 0;
}
