#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter how many numbers to input : ";
    cin>>n;
    float sum=0;
    cout<<"Enter THe numbers : ";
    for(int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        sum+=x;
    }
    float avg = sum/n;
    cout<<"Average : "<<avg;
    return 0;
}