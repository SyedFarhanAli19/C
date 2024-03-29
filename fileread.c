#include<stdio.h>
int main()
{
    FILE *ptr = NULL;
    char string[100];
    ptr = fopen("myfile.txt","r");
    fscanf(ptr,"%s",string);
    printf("%s\n",string);
    return 0;
}