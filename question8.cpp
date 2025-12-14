/*
    Given a Queue consisting of first n natural numbers (in random order). The task is to check whether
the given Queue elements can be arranged in increasing order in another Queue using a stack. The
operation allowed are:
1. Push and pop elements from the stack
2. Pop (Or Dequeue) from the given Queue.
3. Push (Or Enqueue) in the another Queue.
Input : Queue[] = { 5, 1, 2, 3, 4 }
Output : Yes
*/
#include <iostream>
using namespace std;
int main()
{
    queue<int>st ;
    st.push(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    stack<int> temp1  ;
    int expected = 1 ;
    int n = st.size() ;
    queue<int> ans ;
    for(int i = 0 ; i < n ; i++)
    {
        int x = st.front() ;
        st.pop() ;
        if(x==expected)
        {
            ans.push(x) ;
            expected++ ;
        }
        else{
            if (!temp1.empty() && temp1.top() < x)
            {
                cout << "No";
                return 0;
            }
            temp1.push(x);
        }
    }
    while(!temp1.empty())
    {
        int y = temp1.top() ;
        temp1.pop();
        if(y== expected)
        {
            ans.push(y);
            expected++;
        }
        else{
            cout<< "no" ;
            return 0 ;
        }
    }
    if(ans.size()==n)
    {
        cout << "yes" ;
    }
    else{
        cout <<"no" ;
    }
return 0 ;
}