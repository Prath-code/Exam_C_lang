#include <stdio.h>

// Write a C program that defines a function to reverse a 3 digit number

void reverseNumber(int num);

int main() {
    int number;

    printf("Enter a 3-digit number: ");
    scanf("%d", &number);

    if (number < 100 || number > 999) {
        printf("Please enter a valid 3-digit number.\n");
        return 1;
    }

    reverseNumber(number);
    
    return 0;
}

void reverseNumber(int num) {
    int reversed = 0;

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    printf("Reversed number: %d\n", reversed);
}
