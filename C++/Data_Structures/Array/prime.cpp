#include<iostream>
#include<vector>
using namespace std;
bool prime_check(int num)
{
    if(num<=1)
    {
        return false;
    }
    if(num<=3)
    {
        return true;
    }
    for(int i=2; i<=num-1; i++)
    {
        if(num%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    vector<int> v ;
    vector<int> v1;
    int num;
    cin>>num;
    for(int i=1; i<=num; i++)
    {
        if(prime_check(i)==1)
        {
            v.emplace_back(i);
        }
    }
    for (auto p : v)
    {
        cout << p << " ";
    }
    cout << endl;
    return 0;
}