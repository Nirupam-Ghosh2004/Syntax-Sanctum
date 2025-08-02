/*

reverse([5,4,3,2,1])
    └── reverse([4,3,2,1])
        └── reverse([3,2,1])
            └── reverse([2,1])
                └── reverse([1])
                    └── reverse([])  <-- base case

Then starts:
insertAtBottom([], 1) → [1]
insertAtBottom([1], 2) → [1, 2]
insertAtBottom([1,2], 3) → [1, 2, 3]
insertAtBottom([1,2,3], 4) → [1, 2, 3, 4]
insertAtBottom([1,2,3,4], 5) → [1, 2, 3, 4, 5]

*/

#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &st, int ele)
{
    if(st.empty()==true)
    {
        st.push(ele);
        return;
    }

    int num = st.top();
    st.pop();

    insertAtBottom(st,ele);

    st.push(num);
}


void reverse(stack<int>& st)
{
    if(st.empty())
    {
        return;
    }
    int num = st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st,num);

}

int main()
{
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

    reverse(st);
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}