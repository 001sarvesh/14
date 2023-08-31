// Write a program to find second largest in an array.Take array values from the user

#include <stdio.h>

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
    
    int largest = arr[0];
    int secondLargest = arr[0];
    
    for (i = 1; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }
    
    printf("The second largest element in the array is: %d\n", secondLargest);
    
    return 0;
}
