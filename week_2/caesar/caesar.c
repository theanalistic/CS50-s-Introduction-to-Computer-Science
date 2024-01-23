#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int only_digit(char *actual);

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("error\n");
        return 1;
    }
    // printf("%c", argv[1][1]);
    // printf("leng %lu adns argc %i\n", strlen(argv[1]), argc);
    int digit = only_digit(argv[1]);
    if (digit == 1)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    int key = atoi(argv[1]);
    // printf("key is %i and length is %lu\n", key, strlen(argv[1]));

    string plaintext = get_string("plaintext:  ");
    printf("ciphertext:  ");

    for (int i = 0; i < strlen(plaintext); i++)
    {
        char cipher = plaintext[i];
        int position;
        if (isalpha(plaintext[i]))
        {
            if (isupper(plaintext[i]))
            {
                position = ((int) plaintext[i]) - 65;
                cipher = ((position + key) % 26) + 65;
            }
            else
            {
                position = (int) plaintext[i] - 97;
                cipher = ((position + key) % 26) + 97;
            }
        }

        printf("%c", cipher);
    }
    printf("\n");
    return 0;
}

int only_digit(char *actual)
{
    for (int i = 0; i < strlen(actual); i++)
    {
        printf("%c", actual[i]);
        if (!isdigit(actual[i]))
        {
            printf(" dead %c", actual[i]);
            return 1;
        }
    }
    return 0;
}
