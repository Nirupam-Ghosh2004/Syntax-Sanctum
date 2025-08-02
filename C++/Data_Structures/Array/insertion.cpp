/*

----------------------------------------------------------------------------------------------------------------

❓ What is Insertion in an Array?
Answer:
Insertion in an array refers to the process of adding a new element 
at a specified position (beginning, middle, or end) in the array. 
Since arrays store elements in a contiguous block of memory, inserting 
an element typically requires shifting subsequent elements to the right 
to make space.
----------------------------------------------------------------------------------------------------------------

📌 Key Points:
* Arrays have fixed size (in languages like C/C++).

* Insertion requires manual shifting of elements unless using
dynamic structures like std::vector in C++ or ArrayList in Java.

* In 0-based indexing, inserting at position i means the element
becomes the new arr[i].
----------------------------------------------------------------------------------------------------------------

🧠 Types of Insertion:
* At the Beginning – Shift all elements one position to the right, 
insert at arr[0].

* At a Specific Position – Shift elements from the index onward to 
the right, insert at that index.

* At the End – Insert at arr[size], no shifting required.
----------------------------------------------------------------------------------------------------------------

💡 Time Complexity:
* Best Case: O(1) (insertion at the end)

* Worst Case: O(n) (insertion at the beginning)

----------------------------------------------------------------------------------------------------------------
*/
#include <iostream>
using namespace std;
int main()
{
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

    int index, ele;
    cout << "Enter the position where the element to be inserted : ";
    cin >> index;

    if (index < 0 || index > size + 1)
    {
        cout << "Invalid position !!! ";
    }
    else
    {
        for (int i = size - 1; i >= index - 1; i--)
        {
            arr[i + 1] = arr[i];
        }
        cout << "Enter the element to be inserted : ";
        cin >> ele;
        arr[index - 1] = ele;
        size++;
        cout << "Array : ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}