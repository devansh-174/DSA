/*
Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping
the adjacent elements if they are in wrong order. Code the Bubble sort with the
following elements:
*/
/*
Bubble Sort implementation in simple way
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> p = {4, 2, 5, 7, 1, 3, 9, 0};

    for (int i = 0; i < p.size(); i++) {
        for (int j = 0; j < p.size()-i-1; j++) {
            if (p.at(j) > p.at(j+1)) {
                int temp = p.at(j);
                p.at(j) = p.at(j+1);
                p.at(j+1) = temp;
            }
        }
    }

    cout << "Sorted array is: ";
    for (int i = 0; i < p.size(); i++) {
        cout << p.at(i) << " ";
    }
    cout << endl;

    return 0;
}
