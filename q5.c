// Write a program to find the smallest number stored in an array of size 10. Take array
// values from the user.

#include <stdio.h>

#define SIZE 10

int main() {
    int numbers[SIZE];
    int minNumber;

    printf("Enter %d numbers:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &numbers[i]);
    }

    minNumber = numbers[0];  // Assume the first number is the minimum

    for (int i = 1; i < SIZE; i++) {
        if (numbers[i] < minNumber) {
            minNumber = numbers[i];  // Update minNumber if a smaller number is found
        }
    }

    printf("The smallest number is: %d\n", minNumber);
    return 0;
}


