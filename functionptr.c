#include<stdio.h>
int add(int a, int b)
{
    return a + b;
}
int main()
{
    printf("The value is : %d\n",add(3,10));

    int (*fptr)(int, int);
    fptr = &add;
    int d = (*fptr)(3,6);
    printf("The value is %d\n",d);
    return 0;
}