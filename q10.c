// Write a program in C to copy the elements of one array into another array.Take array
// values from the user

#include <stdio.h>

int main() {
    int size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr1[size], arr2[size];

    printf("Enter the elements of the first array:\n");
    for (i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("Copying elements from the first array to the second array...\n");
    for (i = 0; i < size; i++) {
        arr2[i] = arr1[i];
    }

    printf("Elements of the first array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("Elements of the second array (copy): ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}
