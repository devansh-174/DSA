//Q1 Implementing Stack using Arrays

#include<iostream>
using namespace std;

class Stack
{
    int size;
    int *a;
    int top;
    public:
    Stack(int s=1000)
    {
        top=-1;
        size=s;
        a=new int[size];
    }
    ~Stack()
    {
        delete[] a; //freeing accumalated stack size
    }
    void push(int x)
    {
        if(top==size-1)
        {
            cout<<"Stack Overflow!,Cannot push "<<x<<endl;
            return;
        }
        a[++top]=x;
        cout<<x<<" is pushed"<<endl;
    }
    int pop()
    {
        if(top==-1)
        {
            cout << "Stack Underflow!,Cannot pop"<< endl;
            return -1;
        }
        cout<<"Pop Successful";
        return a[top--];
    }
    bool isEmpty()
    {
        if(top==-1)
        return true;
        else
        return false;
    }
    bool isFull()
    {
        if(top==size-1)
        return true;
        else
        return false;
    }
    void display()
    {
        if(top==-1)
        {
        cout<<"Stack is empty";
        return;
        }
        for(int i=top;i>=0;i--)
        {
            cout<<a[i]<<" ";
        }
    }
    int peek()
    {
        if(top==-1)
        {
        cout<<"Stack is empty";
        return -1;
        }
        else
        return a[top];
    }
};
int main()
{   
    Stack s(5);
    int c;
    //passing initial values of stack for testing
    s.push(6);
    s.push(3);
    s.push(7);

    cout<<"Make your choice from following menu:-"<<endl;
    cout<<"1.push() \n 2.pop() \n 3.isEmpty() \n 4.isFull() \n 5.display() \n 6.peek()"<<endl;
    cin>>c;

    switch(c)
    {
        case 1:
        {
            cout<<"Enter the element to be pushed";
            int ele;
            cin>>ele;
            s.push(ele);
            break;
        }
        case 2:
        {
            s.pop();
            break;
        }
        case 3:
        {
            bool ans=s.isEmpty();
            if(ans==true)
            cout<<"Stack is empty";
            else
            cout<<"Stack is not empty";
            break;
        }
        case 4:
        {
            bool ans=s.isFull();
            if(ans==true)
            cout<<"Stack is full";
            else
            cout<<"Stack is not full";
            break;
        }
        case 5:
        {
            s.display();
            break;
        }
        case 6:
        {
            cout<<"Peek value is "<<s.peek()<<endl;
            break;
        }
    }

    // Testing underflow
    s.pop();
    s.pop();
    s.pop();
    return 0;
}
//TC-O(n),SC-O(n)
