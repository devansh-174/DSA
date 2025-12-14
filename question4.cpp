/*
Write a program to find first non-repeating character in a string using Queue.
Sample I/P: a a b c 
Sample O/P: a -1 b b
*/

#include <iostream>
#include <queue>
#include <string>
using namespace std;

void findFirstNonRepeating(string B) {
    queue<char> q;      
    int freq[26] = {0}; // frequency count for each lowercase letter

    for (int i = 0; i < B.size(); i++) {
        char ch = B[i];
        freq[ch - 'a']++; 
        q.push(ch);       // push current character

        // remove all repeating characters from front
        while (!q.empty() && freq[q.front() - 'a'] > 1) {
            q.pop();
        }

        // print result for this step
        if (q.empty()) 
            cout << "-1 ";
        else 
            cout << q.front() << " ";
    }
    cout << endl;
}

int main() {
    string B = "aabc";
    findFirstNonRepeating(B);
    return 0;
}
