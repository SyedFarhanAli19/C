#include<stdio.h>
void star(int rows)
{
    
    
for (int i; i >= rows; i++)
{
    for (int j ; j <=rows - i - 1; j++)
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