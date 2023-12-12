#include <stdio.h>

int advanced_binary_recursive(int *array, size_t left, size_t right, int value) {
    if (left <= right) {
        size_t mid = left + (right - left) / 2;

        // Print the current subarray being searched
        printf("Searching in array: ");
        for (size_t i = left; i <= right; ++i) {
            printf("%d ", array[i]);
        }
        printf("\n");

        if (array[mid] == value) {
            // Check if it's the first occurrence
            while (mid > left && array[mid - 1] == value) {
                mid--;
            }
            return (int)mid;
        } else if (array[mid] < value) {
            return advanced_binary_recursive(array, mid + 1, right, value);
        } else {
            return advanced_binary_recursive(array, left, mid - 1, value);
        }
    }

    return -1; // Value not found
}

int advanced_binary(int *array, size_t size, int value) {
    if (array == NULL || size == 0) {
        return -1;
    }

    return advanced_binary_recursive(array, 0, size - 1, value);
}

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4, 5, 6, 7, 8, 9};
    size_t size = sizeof(arr) / sizeof(arr[0]);

    int result = advanced_binary(arr, size, 2);

    if (result != -1) {
        printf("Value 2 found at index: %d\n", result);
    } else {
        printf("Value not found in the array.\n");
    }

    return 0;
}
