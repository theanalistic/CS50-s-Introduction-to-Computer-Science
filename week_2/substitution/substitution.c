#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int confirm(string key)
{
    int length = strlen(key);
    if (length != 26)
    {
        printf("error by length\n");
        return 1;
    }
    for (int i = 0; i < length; i++)
    {
        if (!isalpha(key[i]))
        {
            printf("error by not be a letter\n");
            return 1;
        }

        for (int j = i + 1; j < 26; j++)
        {
            if (key[i] == key[j])
            {
                printf("error by repeating\n");
                return 1;
            }
        }
    }
    return 0;
}

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("error\n");
        return 1;
    }
    int condition = confirm(argv[1]);
    if (condition == 1)
    {
        printf("error\n");
        return 1;
    }

    string plaintext = get_string("plaintext:  ");
    printf("ciphertext: ");
    for (int i = 0; i < strlen(plaintext); i++)
    {
        int position = 0;
        char actual = plaintext[i];
        if (isupper(plaintext[i]))
        {
            // printf("min pos %i \n", plaintext[i] - 65);
            position = (plaintext[i] - 65);
            actual = toupper(argv[1][position]);
        }
        else if (islower(plaintext[i]))
        {
            // printf("min pos %i \n", plaintext[i] - 97);
            position = plaintext[i] - 97;
            actual = tolower(argv[1][position]);
        }
        // printf("position is %i", position);
        printf("%c", actual);
    }
    printf("\n");
}
