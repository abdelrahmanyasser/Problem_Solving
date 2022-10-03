/* 
 * @author: Abdelrahman Yasser
 * 
 * @breif: This file is a test application for different sorting
 *         algorithms implemented in different files.
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

typedef enum
{
    ASCENDING,
    DESCENDING
}SortingMode_t;

/* Prototypes */
void printArray(const int* arr, const int arr_size);
void fillArrayWithRandom(int* arr, int arr_size);
void bubbleSort( int* arr, int arr_size, SortingMode_t mode );
void swap(int* a, int* b);

int main ()
{
    int arr[SIZE] = {0};

    fillArrayWithRandom(arr, SIZE);

    puts("Array Before Sorting:");
    printArray(arr, SIZE);

    bubbleSort(arr, SIZE, ASCENDING);

    puts("Array After Ascending Sorting:");
    printArray(arr, SIZE);

    bubbleSort(arr, SIZE, DESCENDING);

    puts("Array After Descending Sorting:");
    printArray(arr, SIZE);

    getchar(); /* For holding the result before return */

    return 0;
}

void fillArrayWithRandom(int* arr, int arr_size)
{
    int i;
    for ( i = 0; i < arr_size; i++ )
    {
        arr[i] = rand() % 10;
    }
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


void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

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