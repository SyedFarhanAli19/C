#include<stdio.h>

int add(int *a,int *b)
{
    temp = *a;
    *a = *a + *b;
    sub(&temp,&b);
    return a;

}
int sub(int *a,int *b)
{
    *b = *temp - *b;
    return b;
}
int main()
{
    int a = 4 ,b = 3,temp;
    printf("a is %d and b is %d\n",a,b);
    add(&a,&b);
    printf("a is %d b is %d",a,b);
    return 0;
}