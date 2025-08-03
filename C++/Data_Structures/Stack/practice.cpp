#include<iostream>
#include<stack>
using namespace std;


int main()
{
    // stack creation and insertion
    stack<int> st;
    int n;
    cout<<"Enter the size of the stack : ";
    cin>>n;
    cout<<"Enter elements into the stack : "<<endl;
    for(int i=0; i<n; i++)
    {
        int ele;
        cin>>ele;
        st.push(ele);
    }

    // Function call
    reverse(st)
    // popping and printing the stack;
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
} 
 