// Write a program to calculate the sum of numbers stored in an array of size 10. Take
// array values from the user

#include <stdio.h>

#define SIZE 10

int main() {
    int numbers[SIZE];
    int sum = 0;

    printf("Enter %d numbers:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i]; // SUM = SUM + NUMBERS[I]
    }

    printf("Sum of the numbers: %d\n", sum);
    return 0;
}


