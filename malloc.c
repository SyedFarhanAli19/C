#include<stdio.h>
#include<stdlib.h>
int main()
{
    // int *ptr;
    // int n;
    // printf("Enter the size of the array : ");
    // scanf("%d",&n);
    // ptr = (int *)malloc(n*sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the value no %d of this array\n",i);
    //     scanf("%d",&ptr[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("The value at %d of this array is %d\n",i,ptr[i]);
    // }
    //using calloc
    
    int *ptr;
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    ptr = (int *)calloc(n,sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n",i);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d\n",i,ptr[i]);
    }
    //using realloc
    
    printf("Enter the size of the new array : ");
    scanf("%d",&n);
    ptr = (int *)realloc(ptr,n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the new value no %d of this array\n",i);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this new array is %d\n",i,ptr[i]);
    }
    printf("Enter any key to exit.....");
    scanf("%d");
    return 0;
}