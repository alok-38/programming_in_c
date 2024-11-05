#include <stdio.h>

#define MAX_NUMBERS 100

// function prototype
float calculate_average(int numbers[], int count);

int main() {
    int numbers[MAX_NUMBERS];
    int count = 0;
    char choice;

    printf("Enter up to %d numbers. Type 'q' to finish.\n", MAX_NUMBERS);

    while (count < MAX_NUMBERS) {
        printf("Enter a number (or 'q' to quit): ");
        if (scanf("%d", &numbers[count]) != 1) {
            // clear the input buffer
            while (getchar() != '\n');
            break;
        }
        count++;
    }

    float average = calculate_average(numbers, count);
    printf("The average of the entered numbers is: %.2f\n", average);

    return 0;
}

float calculate_average(int numbers[], int count) {
    if (count == 0) return 0;

    int sum = 0;

    for (int i = 0; i < count; i++) {
        sum += numbers[i];
    }
    return (float)sum / count;
}

