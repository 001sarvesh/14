// 2. Write a program to calculate the average of numbers stored in an array of size 10.
// Take array values from the user

#include <stdio.h>

#define SIZE 10

int main() {
    int numbers[SIZE];
    int sum = 0;
    float average;

    printf("Enter %d numbers:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    average = (float)sum / SIZE;
    printf("Average of the numbers: %.2f\n", average);
    return 0;
}
