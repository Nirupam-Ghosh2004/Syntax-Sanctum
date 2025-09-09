#include<iostream>
#include<stack>
using namespace std;
void valid_p(stack<int> &st, int n, int ctr)
{
    if(ctr == n/2)
    {
        st.pop();
        return;
    }
    int q = st.top();
    st.pop();
    del_mid(st,n,ctr+1);
    st.push(q);
}
int main()
{
    stack<int> st ;
    string str;
    cout<<"Enter the set of parenthesis : ";
    cin>>str;
    for(int i=0; i<str.length(); i++)
    {
        int num;
        cin>>num;
        st.push(num);
    }
    del_mid(st,n,0);
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}