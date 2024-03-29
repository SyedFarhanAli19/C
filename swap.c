//This is an example of call by reference 
//in call by reference the values of actual parameters can be changed because we use the &(address operator)
#include<stdio.h>
void swap(int *x,int *y)
{
   int temp;
   temp = *x;
   *x = *y;
   *y = temp;
   return ;
}
int main(){
    
    int a = 34,b = 50;
    printf("a is %d and b is %d\n",a,b);
    swap(&a,&b);
    printf("a is %d and b is %d\n",a,b);
}