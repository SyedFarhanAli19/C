#include<stdio.h>
void star(int rows)
{
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j <= i; j++)
    {
        printf("*");
    }
    printf("\n");    
}

}
int main()
{
    int rows;
    printf("Enter the number of rows you want ");
    scanf("%d",&rows);
    star(rows);
    
    return 0;
}