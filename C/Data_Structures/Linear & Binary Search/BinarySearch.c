#include<stdio.h>
int binarySearch(int *arr, int n, int f)
{
    int l=0;
    int h=n-1;
    while(l<=h)
    {
        int mid = l+(h-l)/2;
        if(arr[mid]==f) return(mid);
        else if(arr[mid]<f) l=mid+1;
        else h=mid-1;
    }
    return(-1);
}
int main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in the array in sorted order : \n");
    for(int i=0 ; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The array elements : ");
    for( int i=0 ; i<n ; i++)
    {
        printf("%d ",arr[i]);
    }
    int f;
    printf("\nEnter the element to be searched : ");
    scanf("%d",&f);
    int x = binarySearch(arr,n,f);
    if(x==-1)
    {
        printf("Element not present !!");
    }
    else
    {
        printf("The element is present at %d .",x);
    }
}