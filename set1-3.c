#include <stdio.h>
main()
{    char ch;
    printf("\nEnter Single Character: ");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
    case 'A':
        printf("\n\n%c is a vowel", ch);
        break;
    case 'e':
    case 'E':
        printf("\n\n%c is a vowel", ch);
        break;
    case 'i':
    case 'I':
        printf("\n\n%c is a vowel", ch);
        break;
    case 'o':
    case 'O':
        printf("\n\n%c is a vowel", ch);
        break;
    case 'u':
    case 'U':
        printf("\n\n%c is a vowel", ch);
        break;
    default:
        printf("\n\n%c is not a vowel", ch);
    }  getch();
}
