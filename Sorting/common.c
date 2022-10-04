/*
 * @author: Abdelrahman Yasser
 *  @breif: Common service functions used in sorting.
 */

#include "common.h"

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(const int* arr, const int arr_size)
{
    int i;
    for ( i = 0; i < arr_size; i++ )
    {
        printf("%d ", arr[i]);
    }
    puts("");
}

void fillArrayWithRandom(int* arr, int arr_size)
{
    int i;
    for ( i = 0; i < arr_size; i++ )
    {
        arr[i] = rand() % 10;
    }
}
