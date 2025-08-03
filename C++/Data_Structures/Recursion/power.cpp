/*

power(2, 3)
= 2 * power(2, 2)
= 2 * (2 * power(2, 1))
= 2 * (2 * (2 * power(2, 0)))
= 2 * (2 * (2 * 1))
= 2 * (2 * 2)
= 2 * 4
= 8

*/

#include<iostream>
using namespace std;
int power(int b, int e)
{
    if(e==0)
    {
        return 1;
    }
    return (b * power(b,e-1));
}
int main()
{
    int base;
    int expo;
    cout<<"Enter the base : ";
    cin>>base;
    cout<<"Enter the exponent : ";
    cin>>expo;
    int ans = power(base,expo);
    cout<<"Answer : "<<ans<<endl;
    return 0;
}