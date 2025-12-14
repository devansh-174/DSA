/*
Given a queue with random elements, we need to sort it. We are not allowed to use extra space. The
operations allowed on queue are:
1. enqueue() : Adds an item to rear of queue.
2. dequeue() : Removes an item from front of queue.
3. isEmpty() : Checks if a queue is empty.
Input: 11, 5, 4, 21
Output: 4, 5, 11, 21
*/
#include <iostream>
#include <queue>
#include <climits>
using namespace std;

int main() {
    queue<int> A;
    A.push(11);
    A.push(5);
    A.push(4);
    A.push(21);

    int n = A.size();

    for (int i = 0; i < n; i++) {

        int minVal = INT_MAX;
        int size = A.size();

        // Step 1: Find min in unsorted part (which is size - i)
        for (int j = 0; j < size; j++) {
            int curr = A.front(); A.pop();

            if (j < size - i && curr < minVal)
            {
                minVal = curr;
            }
            A.push(curr);
        }

        // Step 2: Remove that min once from unsorted part
        bool removed = false;
        for (int j = 0; j < size; j++) {
            int curr = A.front(); A.pop();

            if (j < size - i && curr == minVal && !removed) {
                removed = true; // skip once
                continue;
            }

            A.push(curr);
        }

        // Step 3: Insert min at correct sorted position (front + i)
        A.push(minVal);

        // Rotation: bring min into position i
        for (int r = 0; r < size; r++) {
            A.push(A.front());
            A.pop();
        }
    }

    cout << "Sorted queue: ";
    while (!A.empty()) {
        cout << A.front() << " ";
        A.pop();
    }
}
