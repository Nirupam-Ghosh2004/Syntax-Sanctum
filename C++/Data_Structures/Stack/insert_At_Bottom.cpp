/*

insertAtBottom([30,20,10], 5)
  ├─ pop 30
  └── insertAtBottom([20,10], 5)
        ├─ pop 20
        └── insertAtBottom([10], 5)
              ├─ pop 10
              └── insertAtBottom([], 5)
                    └── Base case: push 5

              └── push 10  -> [10, 5]
        └── push 20        -> [20, 10, 5]
  └── push 30              -> [30, 20, 10, 5]


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

    int x;
    cout<<"Enter the element to be inserted at the bottom : ";
    cin>>x;
    insertAtBottom(st,x);
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}