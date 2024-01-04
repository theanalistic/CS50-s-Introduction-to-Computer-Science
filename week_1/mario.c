#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        printf("heigth: ");
        scanf("%i", &height);
    }
    while (height < 1 || height > 8);

    for (int i = 1; i <= height; i++)
    {
        for (int k = 1; k <= height - i; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= (i * 2) + 2; j++)
        {
            // This prints the 2 spaces in the middle
            if (j == ((i * 2) + 2) / 2 || j == (((i * 2) + 2) / 2) + 1)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
}
