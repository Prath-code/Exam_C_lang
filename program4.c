#include <stdio.h>

// Write a C program to find square of each elements of an 1D array using Pointer

void findSquare(int *a, int size);

int main() {
    int size;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Please enter a valid size greater than 0.\n");
        return 1;
    }

    int a[size];

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    findSquare(a, size);

    return 0;
}

void findSquare(int *a, int size) {
    printf("Squares of the elements are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", (*(a + i)) * (*(a + i)));
    }
    printf("\n");
}
