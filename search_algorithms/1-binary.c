#include "search_algos.h"

/**
 * linear_search - that searches for a value in an array
 * of integers using the Linear search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in @array
 * @value: value to search for
 *
 * Return: the first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
    int left = 0;
    int right = size - 1;
    int mid = (size - 1) / 2;
    int i = 0;

    if (array == NULL)
        return (-1);

    while (left <= right)
    {
        mid = left + (right - left) / 2;
        printf("Searching in array: ");
        for (i = left; i < right; i++)
        {
            if (i > left)
                printf(", ");
            printf("%d", array[i]);
        }
        printf("\n");
        if (array[mid] == value)
            return (mid);

        if (array[mid] < value)
            left = mid + 1;

        else
            right = mid - 1;
    }
    return (-1);
}
