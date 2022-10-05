/*
 * @author: Abdelrahman Yasser
 *  @breif: Common service functions used in sorting.
 */

#ifndef COMMON_H
#define COMMON_H

#include <stdio.h>
#include <stdlib.h>

/* Constants */
#define SIZE 10

/* Types */
typedef enum
{
    ASCENDING,
    DESCENDING
}SortingMode_t;

/* Prototypes */
void printArray(const int* arr, const int arr_size);
void fillArrayWithRandom(int* arr, int arr_size);
void swap(int* a, int* b);

#endif