#include<iostream>
#include<stack>
using namespace std;

void printStack(stack<int> s)
{
    while(s.empty()!=true)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
int main()
{
    //Creation of stack
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);

    printStack(st);
    st.pop();
    printStack(st);
    cout<<"Top element : "<<st.top()<<endl;

    if(st.empty()==true)
    {
        cout<<"Stack is empty !!!";
    }
    else
    {
        cout<<"Stack is not empty";
    }

    return 0;
}