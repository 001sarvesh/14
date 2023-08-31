// Write a program to sort elements of an array of size 10. Take array values from the
// user

#include <stdio.h>

#define SIZE 10

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int numbers[SIZE];

    printf("Enter %d numbers:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &numbers[i]);
    }

    bubbleSort(numbers, SIZE);

    printf("Sorted array: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
