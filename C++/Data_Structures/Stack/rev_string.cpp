#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> st;
    string str;
    cout<<"Enter the String : ";
    cin>>str;
    int len = str.length();
    for(int i = 0; i<len; i++)
    {
        st.push(str[i]);
    }
    string rev_str="";
    for(int i=0; i<len; i++)
    {
        rev_str.push_back(st.top());
        st.pop();
    }
    cout<<"Reverse String : "<<rev_str<<endl;
    return 0;
}