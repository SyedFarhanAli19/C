#include<stdio.h>
int main()
{
    
    // FILE *ptr = NULL;
    // char string[100]="         I wanna poop";
    // ptr = fopen("myfile.txt","a");
    // fprintf(ptr,"%s",string);
    FILE *ptr = NULL;
    ptr = fopen("myfile.txt","r");
    char str[35]; 
    fgets(str,35,ptr);
    printf("%s",str);
    fclose(ptr);
    return 0;
}