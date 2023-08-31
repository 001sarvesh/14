//  Write a program to calculate the sum of all even numbers and sum of all odd
// numbers, which are stored in an array of size 10. Take array values from the

#include <stdio.h>

#define SIZE 10

int main() {
    int numbers[SIZE];
    int sumEven = 0;
    int sumOdd = 0;

    printf("Enter %d numbers:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &numbers[i]);
        if (numbers[i] % 2 == 0) {
            sumEven += numbers[i];
        } else {
            sumOdd += numbers[i];
        }
    }

    printf("Sum of even numbers: %d\n", sumEven);
    printf("Sum of odd numbers: %d\n", sumOdd);
    return 0;
}
