#include<stdio.h>
int main(int argc,char const *argv[])
{
    printf("The value of argc is %d\n",argc);
    for (int i = 0; i < argc; i++)
    {
    printf("The value index %d of argv is %d\n",i,argv[i]);
    }
    
    return 0;
}