/*
 * @author: Abdelrahman Yasser
 */

#include <stdio.h>
#define SIZE 20


int main()
{
    int i, row, col;

    for(row = 0; row < SIZE; row++)
    {

        /* print the spaces on the left */
        for(i=row; i<SIZE-1; i++) printf(" ");

        /* print the stars, number of stars in each row = ((2 * Row Number) + 1) */
        for(i=0; i<((2*row)+1); i++) printf("*");

        puts("");
    }

}