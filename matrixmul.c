#include<stdio.h>
int main()
{
    int a[2][3],b[3][2],result[2][2],sum; 
    for (int i = 0; i < 2; i++)//input of first matrix
    {
        for (int j = 0; j < 3; j++)
        {
            // printf("Enter the value of %d row and %d column for matrix a\n",i,j);
            scanf("%d",&a[i][j]);
        }
            printf("\n"); 
    }
             
      for (int i = 0; i < 3; i++)//input of second matrix
    {
        for (int j = 0; j < 2; j++)
        {
            // printf("Enter the value of %d row and %d column for matrix b\n",i,j);
            scanf("%d\t",&b[i][j]);
        }
            printf("\n"); 
    }
             
    //  for (int i = 0; i < 2; i++)//printing of first matrix
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("The value of %d row and %d column for matrix a : %d\n",i,j,a[i][j]);
    //     }
    // }
    // printf("\n\n");
    //  for (int i = 0; i < 3; i++)//printing of second matrix
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         printf("The value of %d row and %d column for matrix b : %d\n",i,j,b[i][j]);
    //     }
    // }
    for (int i = 0; i < 2; i++)//processing of the final matrix
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                sum+=a[i][k]*b[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
        
    }
    for (int i = 0; i < 2; i++)//printing of the final matrix
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t",result[i][j]);    
        }
        printf("\n");
    } 
    return 0;
}

       