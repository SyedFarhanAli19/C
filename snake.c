#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int width = 20;
int height = 20;
int gameover;
int score;
int x, y, fruitX, fruitY, flag;

int tailX[100], tailY[100];
int countTail = 0;

void setup()
{
    gameover = 0;
    x = width / 2;
    y = height / 2;

    label1:
    fruitX = rand() % 20;
    if (fruitX == 0)
        goto label1;

    label2:
    fruitY = rand() % 20;
    if (fruitY == 0)
        goto label2;
    score = 0;
}

void draw()
{
    system("cls");
    int i, j, k;
    for (i = 0; i < width; i++)
    {
        for (j = 0; j < height; j++)
        {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1)
            {
                printf("#");
            }
            else
            {
                if (i == x && j == y)
                {
                    printf("O");
                }
                else if (i == fruitX && j == fruitY)
                {
                    printf("F");
                }
                else
                {
                    int print = 0;
                    for (k = 0; k < countTail; k++)
                    {
                        if (i == tailX[k] && j == tailY[k])
                        {
                            printf("o");
                            print = 1;
                        }
                    }
                    if (print == 0)
                    {
                        printf(" ");
                    }
                }
            }
        }
        printf("\n");
    }
    printf("Score: %d", score);
}

void input()
{
    if (_kbhit())
    {
        switch (_getch())
        {
        case 'a':
            flag = 1;
            break;
        case 's':
            flag = 2;
            break;
        case 'd':
            flag = 3;
            break;
        case 'w':
            flag = 4;
            break;
        case 'x':
            gameover = 1;
            break;
        }
    }
}