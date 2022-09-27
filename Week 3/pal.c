// Week 3 - PAL
//
// Hangsihak S - Fall 2022
//
/* Write a program that check leap years between two years */

#include <stdio.h>
#define LEAP 4

int main(void) {
    int yearOne, yearTwo;
    printf("Enter year 1: ");
    scanf("%d", &yearOne);
    printf("Enter year 2: ");
    scanf("%d", &yearTwo);
    int iterations;

    if(yearTwo > yearOne) {
        iterations = (yearTwo - yearOne) / LEAP;
    } else {
        iterations = (yearOne - yearTwo) / LEAP;
    }

    if(yearOne % 4 == 0 && yearTwo % 4 == 0) {
        printf("Both are leap years\n");
        for(int i = 0; i < iterations; i++) {
            yearOne += 4;
            printf("%d\n", yearOne);
        }
    }
    return 0;
}