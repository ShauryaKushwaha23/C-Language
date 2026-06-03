#include <stdio.h>
#define SIZE 10

int main() {
    int numbers[SIZE];
    int positiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;

    printf("Enter 10 integers:\n");
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &numbers[i]);

        if (numbers[i] > 0) {
            positiveCount++;
        } else if (numbers[i] < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }
    printf("\nResults:\n");
    printf("Positive numbers count: %d\n", positiveCount);
    printf("Negative numbers count: %d\n", negativeCount);
    printf("Zero numbers count: %d\n", zeroCount);

    // Displaying all entered numbers grouped
    printf("\nEntered numbers grouped:\n");
    printf("Positive: ");
    for(int i = 0; i < SIZE; i++) {
        if(numbers[i] > 0) printf("%d ", numbers[i]);
    }
    printf("\nNegative: ");
    for(int i = 0; i < SIZE; i++) {
        if(numbers[i] < 0) printf("%d ", numbers[i]);
    }
    printf("\nZero: ");
    for(int i = 0; i < SIZE; i++) {
        if(numbers[i] == 0) printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
