#include <stdio.h>

/*
    Print a below pattern using nested for loop in C language:
    100
    81 81
    64 64 64
    49 49 49 49
    36 36 36 36 36
*/

int main() {
    int n = 5;
    int start = 100;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", start);
        }
        printf("\n");
        start -= (2 * ((n - i) + 5) + 1);
    }

    return 0;
}