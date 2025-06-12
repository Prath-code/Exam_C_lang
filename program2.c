#include <stdio.h>

void main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int a[size];

    int i;

    for (i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &a[i]);
    }

    int min = a[0];

    for (i = 1; i < size; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    printf("The minimum element is: %d\n", min);
}
