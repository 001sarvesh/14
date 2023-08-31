// Write a program in C to read n number of values in an array and display it in reverse
// order. Take array values from the user.

#include <stdio.h>

int main() {
    int size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("The array in reverse order is: ");
    for (i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
