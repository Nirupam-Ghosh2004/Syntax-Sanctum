#include<stdio.h>
int main()
{
    int n =25;  
    int sum =0; 
    for(int i=22; i<=n; i++)  
    {                         
        sum = sum + i + (i-1);
    }                         
    sum = sum - (n-1); 
    printf("%d",sum);  
    return 0;          
}