#include<stdio.h>
int add(int x,int y)
{
    printf("%d",x+y);
    return 0;
}
int main()
{
    int a,b;
    printf("Enter the numbers you want to add \n");
    scanf("%d %d",&a,&b);
    add(a,b);
    return 0;
}