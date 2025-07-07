// Search number of vowel consonants spaces digits and special character numbers in a string?
#include <stdio.h>
int main()
{
    char str[100];
    int vowels = 0, consonant = 0, digits = 0, spaces = 0, special = 0;
    printf("Enter a string :");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            char lower = ch;
            if (ch >= 'A' && ch <= 'Z')
            {
                lower = ch + 32;
            }
            if ((lower == 'a') || (lower == 'e') || (lower == 'i') || (lower == 'o') || (lower == 'u'))
            {
                vowels++;
            }
            else
                consonant++;
        }
        else if (ch >= '0' && ch <= '9')
        {
            digits++;
        }
        else if (ch == ' ')
        {
            spaces++;
        }
        // else
        //     special++;
        else if (ch != '\n')
        {
            special++;
        }
    }
    printf("the number of vowels is %d\n", vowels);
    printf("the number of consonants is %d\n", consonant);
    printf("the number of digits is %d\n", digits);
    printf("the number of spaces is %d\n", spaces);
    printf("the number of special characters is %d\n", special);
    return 0;
}