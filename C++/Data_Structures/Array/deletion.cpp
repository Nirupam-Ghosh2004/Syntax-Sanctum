/*

----------------------------------------------------------------------------------------------------------------

❓ What is Insertion in an Array?
Answer:
Insertion in an array refers to the process of removing an existing element
at a specified position (beginning, middle, or end) in the array.
Since arrays store elements in a contiguous block of memory, deleting
an element typically requires shifting subsequent elements to the left
to remove space.
----------------------------------------------------------------------------------------------------------------

📌 Key Points:
* Arrays have fixed size (in languages like C/C++).

* deletion requires manual shifting of elements unless using
dynamic structures like std::vector in C++ or ArrayList in Java.

----------------------------------------------------------------------------------------------------------------

🧠 Types of deletiom:
* At the Beginning – Shift all elements one position to the left starting from the 2nd element at index 1.

* At a Specific Position – Shift elements from the index onward to
the left.

* At the End – decrement the size by 1.
----------------------------------------------------------------------------------------------------------------

💡 Time Complexity:
* Best Case: O(1) (deletion at the end)

* Worst Case: O(n) (deletion at the beginning)

----------------------------------------------------------------------------------------------------------------
*/

#include <iostream>
using namespace std;
int main()
{
    int x = 1;
    int arr[50], size;
    cout << "Enter size of the array : ";
    cin >> size;
    cout << "Enter elements into the array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    while (x != 0)
    {
        if(size==0)
        {
            cout<<"Array Empty !!!";
            break;
        }
        int index;
        cout << "Enter the position where the element to be deleted : ";
        cin >> index;

        if (index < 0 || index > size)
        {
            cout << "Invalid position !!! "<<endl;
        }
        else
        {
            for (int i = index; i < size; i++)
            {
                arr[i - 1] = arr[i];
            }
            size--;
            cout << "Array : ";
            for (int i = 0; i < size; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        cout<<"Do you want to continue ? (1/0)";
        cin>>x;
    }
    return 0;
}