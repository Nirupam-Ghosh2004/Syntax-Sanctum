/*

factorial(4)
→ 4 * factorial(3)
        → 3 * factorial(2)
              → 2 * factorial(1)
                    → 1 * factorial(0)
                          → 1   ← base case

*/


#include<iostream>
using namespace std;
long long factorial(int num)
{
    if(num==0)
    {
        return 1;
    }
    return (num * factorial(num-1));
}
int main()
{
    int num;
    cout<<"Enter the num : ";
    cin>>num;
    long long ans = factorial(num);
    cout<<"Answer : "<<ans<<endl;
    return 0;
}