//Q2 MINSTACK

#include <iostream>
#include<stack>

using namespace std;

class minstack
{
    stack<int>st;
    int mini;
    public:
    minstack()
    {
        while(st.empty()==false)
        st.pop();
        mini =INT16_MAX;
    }
    void push(int val)
    {
        if(st.empty())
        {
            mini=val;
            st.push(val);
        }
        else
        {
            if(val<mini)
            {
            st.push(2*val-mini);
            mini=val;
            }
            else
            st.push(val);
        }
    }
    void pop()
    {
        if(st.empty())
        return;
        int val=st.top();
        st.pop();
        if(val<mini)
        {
            mini=(2*mini-val);
        }
    }
    int top()
    {
        if(st.empty())
        return -1;
        int val=st.top();
        if(val<mini)
        return mini;
        return val;
    }
    int getmin()
    {
        return mini;
    }
};
int main()
{
    minstack st;
    st.push(-2);
    st.push(0);
    st.push(-3);
    cout<<st.getmin()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.getmin()<<endl;
    return 0;
}
//TC-O(1) SC-O(N)

