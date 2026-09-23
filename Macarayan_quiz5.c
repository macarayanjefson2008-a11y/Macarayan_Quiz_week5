#include <stdio.h>

int main() {
    float savings, total = 0, average;

    printf("====================================\n");
    printf("       DAILY SAVINGS TRACKER\n");
    printf("====================================\n");

    // Ask savings for Day 1 to Day 7
    for (int day = 1; day <= 7; day++) {
        printf("Enter savings for Day %d: ", day);
        scanf("%f", &savings);

        // Add savings to the running total
        total = total + savings;
    }

    // Calculate daily average
    average = total / 7;

    printf("\n====================================\n");
    printf("          SAVINGS SUMMARY\n");
    printf("====================================\n");

    printf("Total Savings: PHP %.2f\n", total);
    printf("Daily Average: PHP %.2f\n", average);

    // Check if the goal of PHP 500 is reached
    if (total >= 500) {
        printf("Status: GOAL REACHED\n");
    } else {
        printf("Status: GOAL NOT REACHED\n");
        printf("You need PHP %.2f more to reach your goal.\n", 500 - total);
    }

    printf("====================================\n");

    return 0;
}