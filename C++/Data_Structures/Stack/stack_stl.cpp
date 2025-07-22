#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> st;
    // insert : 30 23 70
    st.push(30);
    st.push(23);
    st.push(70);
    cout<<"Size of the stack : "<<st.size()<<endl;
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    return 0;
}