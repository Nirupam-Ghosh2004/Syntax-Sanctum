#include<iostream>
#include<stack>
using namespace std;

void del_mid(stack<int>&st, int size, int count)
{
    if(count ==  ((size%2==0)?((size/2)-1):(size/2)))
    {
        st.pop();
        return;
    }
    int num = st.top();
    st.pop();
    del_mid(st, size, count+1);
    st.push(num);
}
int main()
{
    //stack creation
    stack<int> st;
    int n;
    cout<<"Enter size of the stack : ";
    cin>>n;
    cout<<"Enter elements into the stack : "<<endl;
    for(int i=0; i<n; i++)
    {
        int ele;
        cin>>ele;
        st.push(ele);
    }
    del_mid(st,n,0);
    for(int i=0; i<n-1; i++)
    {
        cout<<st.top() << " ";
        st.pop();
    }
    return 0;
}