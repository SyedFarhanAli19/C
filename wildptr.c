#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a = 35;
    int *ptr;//this is a wild pointer
    // *ptr = 9;//this is not a good thing to do
    ptr = &a; 
    printf("The ptr is %d\n",*ptr);
    
    
return 0;
}