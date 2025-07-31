#include<iostream>
using namespace std;
int main()
{
    int n =8;
    int ctr =0;
    int ct=0;
    int arr[] = {4,5,0,1,0,8,5,6};
    for(int i =0; i<n; i++)
    {
        if(arr[i]!=0)
        {
            arr[ctr++]=arr[i];
        }
    }
    cout<<ctr<<endl;
    for(int i=ctr; i<n; i++)
    {
        arr[i]=0;
    }
    // for(int i =0; i<ctr; i++)
    // {
    //     for(int j=0; j<n-1; j++)
    //     {
    //         if(arr[j]==0 || (arr[j]==0 && arr[j]==arr[j+1]))
    //         {
    //             int a = arr[j];
    //             arr[j] = arr[j+1];
    //             arr[j+1] = a;
    //         }
    //     }
    // }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
   return 0;
}