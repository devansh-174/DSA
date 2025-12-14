
//Q5 Evaulation of Postfix Expression

#include <iostream>
using namespace std;

int evalpost(string exp)
{
    int l=exp.length();
    stack<int>st;
    for(int i=0;i<l;i++)
    {
        char c=exp[i];
        if(isdigit(c))
        st.push(c-'0');
        else
        {
            int val2=st.top();
            st.pop();
            int val1=st.top();
            st.pop();
            switch(c)
            {
                case '+':st.push(val1+val2);
                break;
                case '-':st.push(val1-val2);
                break;
                case '*':st.push(val1*val2);
                break;
                case '/':st.push(val1/val2);
                break;
                case '^':st.push(val1^val2);
                break;

            }
        }
    }
    return st.top();
}
int main()
{
    string exp="57+62-*";
    cout<<"Value of postfix expression is "<<evalpost(exp)<<endl;
    return 0;
}

