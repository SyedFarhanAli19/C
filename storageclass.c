#include <stdio.h>


int func(int a,int b)
{
    static int i=10;
    i++;
    return i;
}

int main()
{

  
    for (int j = 0; j < 5; j++)
    {
        int  i = func(3,5);
        printf("%d\n",i);
    }
    
    return 0;
}