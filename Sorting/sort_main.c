/* 
 * @author: Abdelrahman Yasser
 * 
 * @breif: This file is a test application for different sorting
 *         algorithms implemented in different files.
 */

#include <stdio.h>
#include <stdlib.h>

#include "common.h"
#include "bubble_sort.h"


#define SIZE 10

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
