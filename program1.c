#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Create a C program to check if a number is entered by the user is a porositive or constant using a switch statement

int main()
{
    char input[10], letter;

    printf("Enter a single letter: ");
    fgets(input, sizeof(input), stdin);

    if (strlen(input) > 2 || !isalpha(input[0]) || input[1] != '\n')
    {
        printf("Error: Input must be a single valid alphabet letter.\n");
        return 1;
    }

    letter = input[0];

    switch (letter)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("You entered a porositive.\n");
        break;
    default:
        printf("You entered a consonant.\n");
        break;
    }

    return 0;
}