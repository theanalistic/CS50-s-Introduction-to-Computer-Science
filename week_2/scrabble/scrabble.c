#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define maxsize 45

int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int main(void)
{
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");
    int score1 = 0;
    int score2 = 0;

    for (int i = 0; i < strlen(word1); i++)
    {
        if (isalpha(word1[i]))
        {
            char actual = tolower(word1[i]);
            // printf("%c\n", actual);
            int index_score1 = actual - 97;
            // printf("%i\n", index_score1);
            score1 = score1 + points[index_score1];
        }
    }

    for (int i = 0; i < strlen(word2); i++)
    {
        if (isalpha(word2[i]))
        {
            char actual = tolower(word2[i]);
            // printf("%c\n", actual);
            int index_score1 = actual - 97;
            // printf("%i\n", index_score1);
            score2 = score2 + points[index_score1];
        }
    }
    // printf("1:%i and 2:%i\n", score1, score2);
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }

    else if (score2 > score1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}
 