// binary search
#include <stdio.h>
// n ---> size of the array
// x ---> denotes the element to be searched
int binarySearch(int *arr, int n, int x)
{
    int mid;
    int l = 0;
    int h = n - 1;
    int ctr = 0;
    while (l <= h)
    {
        mid = l + (h - l) / 2;
        if (arr[mid] == x)
        {
            ctr = 1;
            break;
        }
        else if (arr[mid] < x)
            l = mid + 1;
        else
            h = mid - 1;
    }
    if (ctr == 1)
        return mid;
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
    int check = binarySearch(arr, n, x);
    if (check == -1)
        printf("\nElement is not present !!");
    else
        printf("\nElement is present at %d index.", check);
}