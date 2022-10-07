#include <stdio.h>
#define ROWS 3

int main()
{
    int row, col;

    for(row = 0; row < ROWS; row++)
    {
        for(col = 0; col < ROWS; col++)
        {
            if(row == col || row == (ROWS - 1 - col))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}