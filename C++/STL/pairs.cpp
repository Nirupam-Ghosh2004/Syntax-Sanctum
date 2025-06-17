#include<bits/stdc++.h>
using namespace std;
void learn_pair()
{
    pair<int,int> p = {3,6};
    cout<<p.first<<" "<<p.second<<endl;

    // Nested Pair
    pair<int, pair<int,int>> p1 = {2,{5,8}};
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;

    pair<int,int> arr[] = {{1,2},{3,4},{5,6}};
    cout<<arr[2].second<<endl;

}
int main()
{
    learn_pair();
    return 0;
}