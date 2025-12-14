/*

Develop a menu driven program demonstrating the following operations on Circular Queues:
enqueue(), dequeue(), isEmpty(), isFull(), display(), and peek().

*/

#include <iostream>
using namespace std;

#define SIZE 5   // maximum capacity of circular queue

class CircularQueue {
    int arr[SIZE];
    int front, rear;

public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }

    // Check if queue is empty
    bool isEmpty() {
        return (front == -1);
    }

    // Check if queue is full
    bool isFull() {
        return ((rear + 1) % SIZE == front);
    }

    // Insert element into circular queue
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is Full! Cannot enqueue.\n";
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % SIZE;
        }
        arr[rear] = value;
        cout << value << " enqueued into circular queue.\n";
    }

    // Remove element from circular queue
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is Empty! Cannot dequeue.\n";
            return;
        }
        cout << arr[front] << " dequeued from circular queue.\n";
        if (front == rear) {
            // Only one element was present
            front = rear = -1;
        } else {
            front = (front + 1) % SIZE;
        }
    }

    // Peek front element
    void peek() {
        if (isEmpty()) {
            cout << "Queue is Empty.\n";
        } else {
            cout << "Front element: " << arr[front] << endl;
        }
    }

    // Display all elements in circular queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is Empty.\n";
            return;
        }
        cout << "Circular Queue elements: ";
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear)
                break;
            i = (i + 1) % SIZE;
        }
        cout << endl;
    }
};

int main() {
    CircularQueue cq;
    int choice, value;

    cout << "***** Circular Queue Operations Menu *****\n";
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
                cq.enqueue(value);
                break;
            case 2:
                cq.dequeue();
                break;
            case 3:
                cq.peek();
                break;
            case 4:
                cq.display();
                break;
            case 5:
                if (cq.isEmpty())
                    cout << "Queue is Empty.\n";
                else
                    cout << "Queue is not Empty.\n";
                break;
            case 6:
                if (cq.isFull())
                    cout << "Queue is Full.\n";
                else
                    cout << "Queue is not Full.\n";
                break;
            case 7:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 7);

    return 0;
}
