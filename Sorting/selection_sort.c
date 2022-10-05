/*
 * @author: Abdelrahman Yasser
 *  @breif: selection sort implementation.
 */

#include "selection_sort.h"

void selectionSort(int *arr, int arr_size, SortingMode_t mode)
{
    int i, j, temp;

    for( i = 0; i < arr_size; i++)
    {
        /* store first element as a temp */
        temp = 0;

        for( j = 1; j < arr_size - i; j++)
        {
            switch(mode)
            {
                case ASCENDING:
                    if( arr[j] >= arr[temp])
                    {
                        temp = j;
                    }
                    break;
                case DESCENDING:
                    if( arr[j] <= arr[temp])
                    {
                        temp = j;
                    }
                    break;
            }
        }
        swap(&arr[arr_size - 1 - i], &arr[temp]);
    }
}