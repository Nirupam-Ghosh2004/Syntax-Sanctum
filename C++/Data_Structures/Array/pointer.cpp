#include<iostream>
using namespace std;
int main()
{
    int a = 5;
    int arr[3]={1,2,3};
    int *p= &a;
    cout<<*p<<endl;
    cout<<*(arr+2);
    
    return 0;
}