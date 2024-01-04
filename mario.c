#include <ctype.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        printf("Height: ");
        scanf("%i", &height);
    }
    while (height < 1);

    for (int i = 1; i <= height; i++)
    {
        for (int k = 1; k <= height - i; k++)
        {
            printf(" ");
        }
        for (int j = height - i; j < height; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}