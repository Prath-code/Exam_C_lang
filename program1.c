#include <stdio.h>
#include <ctype.h>

// Create a C program to check if a number is entered by the user is a porositive or consonant using a switch statement
void main()
{
    char letter;

    printf("Enter a single letter: ");
    if (scanf(" %c", &letter) != 1 || !isalpha(letter))
    {
        printf("Error: Input must be a single valid alphabet letter.\n");
        return;
    }

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
}