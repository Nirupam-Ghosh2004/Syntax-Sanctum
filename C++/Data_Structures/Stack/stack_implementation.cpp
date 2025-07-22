#include<iostream>
using namespace std;
class Stack
{
    //attributes / properties
    public:
        int top;
        int *arr;
        int size;
    
    //behaviors
    Stack(int size)
    {
        this-> size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int ele)
    {
        if(top==size-1)
        {
            cout<<"Stack Overflow"<<endl;
        }
        else
        {
            top++;
            arr[top]=ele;
        }
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack underflow"<<endl;
        }
        else
        {
            //cout<<"Popped out element is : "<<arr[top]<<endl;
            top--;
        }
    }
    int peek()
    {
        if(top==-1)
        {
            cout<<"Empty Stack"<<" ";
            return -1;
        }
        else
        {
            return(arr[top]);
        }
    }
    bool empty()
    {
        if(top==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    Stack st(5);
    st.push(23);
    st.push(43);
    cout<<st.empty()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.push(23);
    st.push(43);
    st.push(34);
    st.push(89);
    while(!st.empty())
    {
        cout<<st.peek()<<" ";
        st.pop();
    }
    cout<<endl;
    cout<<st.peek()<<endl;

    return 0;
}