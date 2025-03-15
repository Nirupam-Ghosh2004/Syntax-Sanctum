#include <stdio.h>
#include <limits.h>
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
    int min;
    printf("Enter the number : ");
    scanf("%d", &x);
    int max =INT_MIN ;
    while(x!=0)
    {
    min = INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(arr[i]<min && arr[i]>max)
        {
            min = arr[i];
        }
    }
    max=min;
    x--;
    }
    printf("%d",min);
}