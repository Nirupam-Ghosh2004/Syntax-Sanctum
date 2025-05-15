#include <iostream>
using namespace std;
int main()
{
    // Increment and Decrement operators
    int x = 5;
    // postfix
    cout << x++ << endl; // prints 5 then incremented to 6
    // prefix
    cout << ++x << endl; // increments 6 i.e. 7 and prints it
    int a;
    cin >> a;
    int b;
    cin >> b;
    if (a > b)
    {
        int rem = a - b * (a / b);
        cout << "Remainder : " << rem<<endl;
        cout<<"Remainder using modulo operator : "<<a%b;
    }
    return 0;
}