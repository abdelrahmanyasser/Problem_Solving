/*
 * @author: Abdelrahman Yasser
 *  @breif: linear search implemenetation.
 */

int linearSearch(int *arr, int arr_size, int num)
{
    int i;
    for( i =0; i < arr_size; i++)
    {
        if(arr[i] == num)
        {
            return i;
        }
    }

    return -1;
}