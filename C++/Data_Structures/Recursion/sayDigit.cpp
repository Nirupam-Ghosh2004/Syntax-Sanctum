#include<iostream>
using namespace std;
void sayDigit(int num, string arr[])
{
    if(num==0)
    {
        return; 
    }
    sayDigit(num/10, arr);
    cout<<arr[num%10]<<" ";
}
int main()
{
    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int num;
    cin>>num;
    sayDigit(num , arr);
    return 0;
}