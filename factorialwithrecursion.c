#include<stdio.h>
int fact(int n);
int main()
{
    int n;
    printf("Enter any positive number\n");
    scanf("%d",&n);
    printf("The factorial of %d is : %d ",n,fact(n));
    return 0;
}
int fact(int n)
{
    if(n>=1)
    return n*fact(n-1);
    else
    return 1;
}