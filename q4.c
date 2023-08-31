// Write a program to find the greatest number stored in an array of size 10. Take array
// values from the user

#include <stdio.h>

#define SIZE 10

int main() {
    int numbers[SIZE];
    int maxNumber;

    printf("Enter %d numbers:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &numbers[i]);
    }

    maxNumber = numbers[0];  // Assume the first number is the maximum

    for (int i = 1; i < SIZE; i++) {
        if (numbers[i] > maxNumber) {
            maxNumber = numbers[i];  // Update maxNumber if a greater number is found
        }
    }

    printf("The greatest number is: %d\n", maxNumber);
    return 0;
}
