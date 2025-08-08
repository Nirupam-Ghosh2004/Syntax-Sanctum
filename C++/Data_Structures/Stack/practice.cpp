#include<iostream>
#include<stack>
using namespace std;
void del_mid(stack <int> &st,int n,int c)
{
    if(c==(n/2))
    {
        st.pop();
        return;
    }
    int num = st.top();
    st.pop();
    del_mid(st,n,c+1);
    st.push(num);
}
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
    del_mid(st,n,0);
    // popping and printing the stack;
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
} 
 