/*
 * @author: Abdelrahman Yasser
 *  @breif: hollow pyramid pattern implementation
 */

#include <stdio.h>
#define SIZE 8

int main()
{
    int row, i;

    /* Print rows in sequence */
    for (row = 0; row < SIZE; row++)
    {
        /* Print the spaces first */
        for (i = 0; i < SIZE - row - 1 ; i++)
        {
            printf(" ");
        }

        /* print stars at the edge */
        for (i = 0; i < (2*row) +1; i++)
        {
            if( row == SIZE -1 || i == 0 || i == (2*row) )
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        
        /* New line */
        puts("");  
    }
    return 0;
}