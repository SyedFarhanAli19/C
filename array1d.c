#include <stdio.h>

int main()
{
    int marks[2][4] = {{12,23,34,45},
                      {56,67,78,89}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // printf("The value of %d row %d column is : %d \n",i,j,marks[i][j]);
            printf("%d  ",marks[i][j]);
        }
        printf("\n");
        
    }
    

    return 0;
}