#include <stdio.h>

#define SIZE 10

// Function to perform selection sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int array[SIZE] = {25, 56, 47, 89, 12, 14, 78, 55, 99, 77};  // Initialize array with specified values

    // Sort the array elements
    selectionSort(array, SIZE);

    // Print the sorted array
    printf("Sorted array:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Find the middle index of the array
    int middle_index = SIZE / 2;

    // Prompt the user to enter the new element
    int new_element;
    printf("Enter the new element to insert: ");
    scanf("%d", &new_element);

#define SIZE 10+1

    // Shift elements to the right to make space for the new element
    for (int i = SIZE - 1; i > middle_index; i--) {
        array[i] = array[i - 1];
    }

    // Insert the new element into the middle of the array
    array[middle_index] = new_element;

selectionSort(array, SIZE);

    // Print the array with the new element inserted
    printf("Array with the new element inserted:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
