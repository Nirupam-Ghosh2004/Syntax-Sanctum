#include<iostream>
using namespace std;

void walking(int d, int s)
{
    if(s==10)
    {
        cout<<"Home Reached";
        return;
    }
    cout<<s<<endl;
    walking(d,s+1);
}
int main()
{
    int dest = 10;
    int src = 1;
    walking(dest, src);
    return 0;
}