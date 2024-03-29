#include<stdio.h>
int main()
{
    int x = 69;
    float y = 3.1415;
    char z = 'y';
    void *ptr;
    ptr = &x;
    printf("The value of x is : %d\n",x,*((int*)ptr));
    ptr = &y;

    printf("The value of y is : %f\n",y,*((float*)ptr));
    ptr = &z;

    printf("The value of z is : %c\n",z,*((char*)ptr));
    

    return 0;
}