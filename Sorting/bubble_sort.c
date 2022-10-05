/*
 * @author: Abdelrahman Yasser
 *  @breif: bubble sort implementation.
 */

#include "bubble_sort.h"

void bubbleSort( int* arr, int arr_size, SortingMode_t mode )
{
    int i, j;

    /* We need to repeat the bubble pattern SIZE - 1 times */
    for ( i = 0; i < arr_size - 1; i++ )
    {
        /* Now we need to loop through the array till SIZE -1 because
           we forward compare with arr[j+1] */
        for ( j = 0; j < arr_size - 1; j++ )
        {
            switch(mode)
            {
                case ASCENDING:
                if ( arr[j] > arr[j+1] )
                {
                    swap(&arr[j], &arr[j+1]);
                }
                break;
                case DESCENDING:
                if ( arr[j] < arr[j+1] )
                {
                    swap(&arr[j], &arr[j+1]);
                }
                break;
            }
        }
    }   
}