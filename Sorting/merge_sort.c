/*
 * @author: Abdelrahman Yasser
 *  @breif: merge sort implementation.
 */

#include "merge_sort.h"

#include <stdio.h>
#include <stdlib.h>

/* private function */
static void merge(int *arr, int left, int mid, int right, SortingMode_t mode);

void mergeSort(int *arr, int left, int right, SortingMode_t mode)
{
    if (left >= right)
    {
        return;
    }

    /* 1.mistake: wrong mid guess. */
    int mid = ((right + left)/2);

    mergeSort(arr, left, mid, mode);
    mergeSort(arr, mid + 1, right, mode);
    merge(arr, left, mid, right, mode);
}

static void merge(int *arr, int left, int mid, int right, SortingMode_t mode)
{
    /* 2.mistake: k is initialized to array first index not 0 */
    int k = left;
    int i = 0, j = 0;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    /* allocate temp arrays */
    int *tempArr1 = (int *)malloc(sizeof(int) * n1);
    int *tempArr2 = (int *)malloc(sizeof(int) * n2);
    
    /* Copy data into temp arrays */
    for (i = 0; i < n1; i++)
    {
        /* 3.mistake: worng arr[index] .. */
        tempArr1[i] = arr[left + i];
    }
    for (j = 0; j < n2; j++)
    {
        tempArr2[j] = arr[mid + j + 1];
    }

    /* Zero all counters */
    i = 0;
    j = 0;

    /* merge */
    while( (i < n1) && (j < n2) )
    {
        switch(mode)
        {
            case ASCENDING:
            if (tempArr1[i] <= tempArr2[j])
            {
                arr[k] = tempArr1[i];
                i++;
            }
            else
            {
                arr[k] = tempArr2[j];
                j++;
            }
            break;

            case DESCENDING:
            if (tempArr1[i] >= tempArr2[j])
            {
                arr[k] = tempArr1[i];
                i++;
            }
            else
            {
                arr[k] = tempArr2[j];
                j++;
            }
            break;
        }
        k++;
    }

    /* Copy remaining data */
    while (i < n1)
    {
        arr[k] = tempArr1[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = tempArr2[j];
        j++;
        k++;
    }

    /* free temp arrays */
    free(tempArr1);
    free(tempArr2);
}
