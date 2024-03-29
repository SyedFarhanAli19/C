#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("The Filename is %s\n",__FILE__);
    printf("The Date is %s\n",__DATE__);    
    printf("The Tme is %s\n",__TIME__);    
    printf("The line no is %d\n",__LINE__);    
    return 0;
}