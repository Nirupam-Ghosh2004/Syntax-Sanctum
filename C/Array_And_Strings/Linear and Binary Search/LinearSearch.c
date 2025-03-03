//linear search 
#include <stdio.h>
// n ---> size of the array
// x ---> denotes the element to be searched
int linearSearch(int *arr, int n, int x)
{
    int i;
    int ctr = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            ctr = 1;
            break;
        }
    }
    if (ctr == 1)
        return i;
    else
        return -1;
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
    printf("Enter elements in the array in sorted order : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    print(arr, n);
    int x;
    printf("Enter the element to be searched : ");
    scanf("%d", &x);
    int check = linearSearch(arr, n, x);
    if (check == -1)
        printf("\nElement is not present !!");
    else
        printf("\nElement is present at %d index.", check);
}