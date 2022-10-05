/*
 * @author: Abdelrahman Yasser
 */

#include <stdio.h>
#include <stdlib.h>

#include "common.h"
#include "linear_search.h"

int main()
{
    int num, index;

    int arr[SIZE] = {0};
    fillArrayWithRandom(arr, SIZE);

    puts("Array is:");
    printArray(arr, SIZE);

    do
    {
        puts("Please enter a number:");
        scanf("%d", &num);

        index = linearSearch(arr, SIZE, num);
        if(index > 0)
        {
            printf("The index is: %d\n\n", index);
        }
        else
        {
            printf("ERROR404: Number not found!\n\n");
        }
    }while(num != -1);

    return 0;
}