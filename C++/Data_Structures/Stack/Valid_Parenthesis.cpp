#include <iostream>
#include <stack>
using namespace std;
int main()
{
    string str = "";
    cout << "Enter a sequence of parenthesis : ";
    cin >> str;

    stack<char> st;
    for (char i : str)
    {
        if (i == '(' || i == '{' || i == '[')
        {
            st.push(i);
        }
        else
        {
            if (!st.empty())
            {
                if ((st.top() == '(' && i == ')') || (st.top() == '{' && i == '}') || (st.top() == '[' && i == ']'))
                {
                    st.pop();
                }
                else
                {
                    cout << "Not balanced";
                    break;
                }
            }
            else
            {
                cout<< "Not balanced";
            }
        }
    }
    if (st.empty())
    {
        cout << "Balanced";
    }
    else
    {
        cout << "Not balanced";
    }

    return 0;
}
