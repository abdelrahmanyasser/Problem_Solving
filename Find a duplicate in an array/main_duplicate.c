/* 
 * @author: Abdelrahman Yasser
 *
 * @breif: find a duplicate number in an unsorted array of size n+1,
 *         that contains numbers for 1 to n with a duplicate.
 */

#include <stdio.h>

int main()
{
    int arr[11] = { 6, 3, 2, 10, 8, 5, 4, 2, 9, 1, 7};

    int i;
    int temp = 0, arr_sum = 0;

    for( i = 0; i < 11; i++)
    {
        temp += i;
        arr_sum += arr[i];
    }
    puts("Duplicated number is:");
    printf("%d\n", arr_sum - temp);

    getchar();

    return 0;
}