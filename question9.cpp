/*
The school cafeteria offers circular and square sandwiches at lunch break, referred 
to by numbers 0 and 1 respectively. All students stand in a queue. Each student 
either prefers square or circular sandwiches. The number of sandwiches in the 
cafeteria is equal to the number of students. The sandwiches are placed in a stack. 
At each step:
• If the student at the front of the queue prefers the sandwich on the top of the stack, they will take
it and leave the queue.
• Otherwise, they will leave it and go to the queue's end.
This continues until none of the queue students want to take the top sandwich and are thus
unable to eat
Input: students = [1,1,0,0], sandwiches = [0,1,0,1]
Output: 0
*/
#include <iostream>
#include<stack>
#include<queue>
using namespace std;
int main()
{
    queue<int> students ;
    stack<int> sandwiches ;
    // circular sandwhich -->0 square sandwhich ---> 1
    sandwiches.push(0);
    sandwiches.push(1);
    sandwiches.push(0);
    sandwiches.push(1);
    students.push(1);
    students.push(1);
    students.push(0);
    students.push(0);

    while (!sandwiches.empty()) {
        int attempt = students.size();
        bool eaten = false;

        while (attempt--) {
            int x = students.front();
            int y = sandwiches.top();

            if (x == y) {
                sandwiches.pop();
                students.pop();
                eaten = true;
                break;           
            } else {
                students.pop();
                students.push(x); // rotate
            }
        }

        if (!eaten) {
            // no one wanted the top sandwich
            cout << students.size();
            return 0;
        }
    }

    cout << 0; // all students got sandwiches
    return 0;
}