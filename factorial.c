#include<stdio.h>
int factorial(int number)
{
    if(number == 0 || number == 1)
    {
        return 1;
    }
    else
    {
        return (number*factorial(number-1));
    }
}
int main()
{
    int num;
    printf("enter the number you want the factorial of ");
    scanf("%d",&num);
    printf("\nthe factorial of %d is %d",num,factorial(num));
}