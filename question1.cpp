/*

Develop a menu driven program demonstrating the following operations on simple
Queues: enqueue(), dequeue(), isEmpty(), isFull(), display(), and peek().

*/

#include <iostream>
using namespace std;

#define SIZE 5   // Maximum size of the queue

class Queue {
    int arr[SIZE];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    // Check if queue is empty
    bool isEmpty() {
        return (front == -1);
    }

    // Check if queue is full
    bool isFull() {
        return (rear == SIZE - 1);
    }

    // Add element to queue
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is Full! Cannot enqueue.\n";
            return;
        }
        if (front == -1) front = 0; // first element
        rear++;
        arr[rear] = value;
        cout << value << " enqueued to queue.\n";
    }

    // Remove element from queue
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is Empty! Cannot dequeue.\n";
            return;
        }
        cout << arr[front] << " dequeued from queue.\n";
        front++;
        if (front > rear) { // reset when queue becomes empty
            front = rear = -1;
        }
    }

    // Return front element
    void peek() {
        if (isEmpty()) {
            cout << "Queue is Empty.\n";
            return;
        }
        cout << "Front element: " << arr[front] << endl;
    }

    // Display all elements
    void display() {
        if (isEmpty()) {
            cout << "Queue is Empty.\n";
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    int choice, value;

    cout << "***** Queue Operations Menu *****\n";
    do {
        cout << "\n1. Enqueue"
             << "\n2. Dequeue"
             << "\n3. Peek"
             << "\n4. Display"
             << "\n5. Check if Empty"
             << "\n6. Check if Full"
             << "\n7. Exit"
             << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                q.enqueue(value);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.peek();
                break;
            case 4:
                q.display();
                break;
            case 5:
                if (q.isEmpty())
                    cout << "Queue is Empty.\n";
                else
                    cout << "Queue is not Empty.\n";
                break;
            case 6:
                if (q.isFull())
                    cout << "Queue is Full.\n";
                else
                    cout << "Queue is not Full.\n";
                break;
            case 7:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 7);

    return 0;
}
