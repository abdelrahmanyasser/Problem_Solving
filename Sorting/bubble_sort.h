/*
 * @author: Abdelrahman Yasser
 *  @breif: bubble sort interface.
 */

#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

/* Types */
typedef enum
{
    ASCENDING,
    DESCENDING
}SortingMode_t;

/* Prototypes */
void bubbleSort( int* arr, int arr_size, SortingMode_t mode );

#endif