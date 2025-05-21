#include<iostream>
using namespace std;
int main()
{
    int x=1;
    while(x!=0)
    {
    cout<<"Enter an Uppercase Alphabet : ";
    char ch;
    cin>>ch;
    cout<<(int)ch-(int)'A'+1<<endl;
    cout<<"Do you want to continue (1/0) ? ";
    cin>>x;
    }
    cout<<"EXIT";
    return 0;
}