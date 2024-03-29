#include<stdio.h>
int main()
{
    int x = 69;
    int *ptr;
    ptr = &x;
    if(ptr==NULL)
    {
        printf("given pointer is a NULL pointer");
    }
    else
    printf("given pointer is not a NULL pointer \n The value of this pointer is %d",*ptr);

    return 0;
}
