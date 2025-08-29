#include <iostream>
#include <stack>
using namespace std;

stack<int> sortStack(stack<int> &st)
{
    stack<int> st1; 

    while (!st.empty())
    {
        int temp = st.top();
        st.pop();

        while (!st1.empty() && st1.top() > temp)
        {
            st.push(st1.top());
            st1.pop();
        }

        st1.push(temp);
    }

    return st1; 
}

int main()
{
    stack<int> st;
    cout << "Enter the size of the stack: ";
    int n;
    cin >> n;

    cout << "Enter elements in the stack: \n";
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        st.push(num);
    }

    stack<int> sortedStack = sortStack(st);

    cout << "Sorted stack (top to bottom): ";
    while (!sortedStack.empty())
    {
        cout << sortedStack.top() << " ";
        sortedStack.pop();
    }

    return 0;
}
