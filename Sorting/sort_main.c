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
#include "merge_sort.h"
#include "selection_sort.h"


int main ()
{
    int arr[SIZE] = {0};

    fillArrayWithRandom(arr, SIZE);

    puts("Array Before Sorting:");
    printArray(arr, SIZE);

    //bubbleSort(arr, SIZE, ASCENDING);
    //mergeSort(arr, 0, SIZE-1, ASCENDING);
    selectionSort(arr, SIZE, ASCENDING);

    puts("Array After Ascending Sorting:");
    printArray(arr, SIZE);

    //bubbleSort(arr, SIZE, DESCENDING);
    //mergeSort(arr, 0, SIZE-1, DESCENDING);
    selectionSort(arr, SIZE, DESCENDING);

    puts("Array After Descending Sorting:");
    printArray(arr, SIZE);

    getchar(); /* For holding the result before return */

    return 0;
}
