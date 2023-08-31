// Write a program to find the second smallest number in an array.Take array values
// from the user

#include <stdio.h>
#include <limits.h>

int main() {
    int size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size < 2) {
        printf("Invalid input. Size of the array must be at least 2.\n");
        return 0;
    }

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for (i = 0; i < size; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] > smallest) {
            secondSmallest = arr[i];
        }
    }

    printf("The second smallest element in the array is: %d\n", secondSmallest);

    return 0;
}
