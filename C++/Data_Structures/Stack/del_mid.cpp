#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> st;
    stack<int> st1;
    int len;
    cout<<"Enter size of the stack : ";
    cin>>len;
    cout<<"Enter elements into the stack : "<<endl;
    for(int i = 0; i<len; i++)
    {
        int ele;
        cin>>ele;
        st.push(ele);
    }
    int m = (len%2==0)?(len/2)-1:(len/2);
    cout<<"Middle index : "<<m<<endl;
    for(int i=len-1; i>m; i--)
    {
        st1.push(st.top());
        st.pop();
    }
    st.pop();
    while(!st1.empty())
    {
        st.push(st1.top());
        st1.pop();
    }
    
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    return 0;
}
