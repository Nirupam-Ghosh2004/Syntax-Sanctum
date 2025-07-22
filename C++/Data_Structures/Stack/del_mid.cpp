#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> st;

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
    return 0;
}