#include <stdio.h>
// Window maximum problem
void maximum(int *arr, int l, int h)
{
    int m = arr[l];
    for(int i=l; i<=h; i++)
    {
        if(arr[i]>m)
        {
            m = arr[i];
        }
    }
    printf("%d ",m);
}
void print(int *arr, int n)
{
    printf("The array elements are : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements in the array : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    print(arr, n);
    int x;
    printf("Enter the window size : ");
    scanf("%d", &x);
    for(int i =0 ; i<=n-x; i++)
    {
        maximum(arr,i,i+x-1);
    }
}