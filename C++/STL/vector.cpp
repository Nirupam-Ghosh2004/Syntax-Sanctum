#include <bits/stdc++.h>
using namespace std;
void learn_vector()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(8);
    v.emplace_back(6);

    // printing using iterator
    vector<int>::iterator it = v.begin();
    while (it != v.end())
    {
        cout << *(it++) << " ";
    }
    cout << endl;
    //-----------------------------------------------------------------------------------------------------
    vector<pair<int, int>> vp;
    vp.push_back({1, 2});
    vp.emplace_back(6, 9);

    cout << vp[1].second << endl;
    //-----------------------------------------------------------------------------------------------------
    vector<int> vec(10, 3);
    // printing using iterator
    vector<int>::iterator it1 = vec.begin();
    while (it1 != vec.end())
    {
        cout << *(it1++) << " ";
    }
    cout << endl;
    //-----------------------------------------------------------------------------------------------------
    // Iterator
    // accessing elements in a vector
    cout << v[0] << " " << v.at(2) << endl;
    // using iterator
    vector<int>::iterator x = v.begin(); // points at the first element
    x++;
    cout << *(x) << endl;
    x += 2;
    cout << *(x) << endl;
    vector<int>::iterator a = v.end(); // points right after the last element
    cout << "end : " << *a << " " << *(--a) << endl;
    vector<int>::reverse_iterator b = v.rend(); // reverse end : points right before the first element
    cout << "rend : " << *(b) << endl;
    vector<int>::reverse_iterator c = v.rbegin(); // reverse begin : points at the last element
    cout << "rbegin : " << *c << endl;
    //-----------------------------------------------------------------------------------------------------
    // Printing vector
    for (vector<int>::iterator t = v.begin(); t < v.end(); t++)
    {
        cout << *(t) << " ";
    }
    cout << endl;
    // using auto : automatically assign a data type
    for (auto t1 = v.begin(); t1 < v.end(); t1++)
    {
        cout << *(t1) << " ";
    }
    cout << endl;
    // for each loop
    for (auto p : v)
    {
        cout << p << " ";
    }
    cout << endl;
    //-----------------------------------------------------------------------------------------------------
    // Erase element from vector
    v.erase(v.begin() + 1);
    for (auto t1 = v.begin(); t1 < v.end(); t1++)
    {
        cout << *(t1) << " ";
    }
    cout << endl;
    v.erase(v.begin() + 1, v.begin() + 3);
    for (auto t1 = v.begin(); t1 < v.end(); t1++)
    {
        cout << *(t1) << " ";
    }
    cout << endl;
    //-----------------------------------------------------------------------------------------------------
    // Insert Function
    v.insert(v.begin() + 1, 5);
    for (auto p : v)
    {
        cout << p << " ";
    }
    cout << endl;

    v.insert(v.begin() + 1, 3, 2);
    for (auto p : v)
    {
        cout << p << " ";
    }
    cout << endl;
    //-----------------------------------------------------------------------------------------------------
    // Copy
    vector<int> copy(4, 6);
    v.insert(v.begin() + 2, copy.begin(), copy.end());
    for (int a : v)
    {
        cout << a << " ";
    }
    cout << endl;
    //-----------------------------------------------------------------------------------------------------
    // Size
    int len = v.size();
    cout << "Size of vector(v) : " << len << " " << endl;
    //-----------------------------------------------------------------------------------------------------
    // Pop
    v.pop_back();
    for(int i : v)
        cout<<i<<" ";
    cout<<endl;
    //-----------------------------------------------------------------------------------------------------
    // Swap
    copy.swap(v);
    cout<<"copy : ";
    for(int i : copy)
        cout<<i<<" ";
    cout<<endl;
        cout<<"v : ";
    for(int i : v)
        cout<<i<<" ";
    cout<<endl;
    //-----------------------------------------------------------------------------------------------------
    // Clear
    v.clear();
    //-----------------------------------------------------------------------------------------------------
    // Empty check
    cout<<v.empty()<<endl;
}
int main()
{
    learn_vector();
    return 0;
}