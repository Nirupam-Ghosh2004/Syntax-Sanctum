#include<iostream>
using namespace std;

void count(int num)
{
    if(num == 1)
    {
        cout<<1<<" ";
        return;
    }
    cout<<num<<" ";
    count(num-1);
    
}
int main()
{
    int num;
    cout<<"Enter number : ";
    cin>>num;
    count(num);
    return 0;
}