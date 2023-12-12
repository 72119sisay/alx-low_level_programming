#include <stdio.h>

int advanced_binary(int *array, size_t size, int value)
{
    int left = 0, right = size - 1, mid, i;

    if (!array)
        return (-1);

    while (left <= right)
    {
        printf("Searching in array: ");
        for (i = left; i < right; i++)
            printf("%d, ", array[i]);
        printf("%d\n", array[i]);

        mid = (left + right) / 2;
        if (array[mid] < value)
            left = mid + 1;
        else if (array[mid] > value)
            right = mid;
        else
        {
            if (mid == 0 || array[mid - 1] != value)
                return (mid);
            right = mid;
        }
    }

    return (-1);
}
