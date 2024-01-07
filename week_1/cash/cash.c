#include <stdio.h>

int main(void)
{
    int cash;
    int change = 0;
    do
    {
        printf("changed owed: ");
        scanf("%i", &cash);
    }
    while (cash <= 0);

    while (cash >= 25)
    {
        cash = cash - 25;
        change++;
    }

    while (cash >= 10)
    {
        cash = cash - 10;
        change++;
    }

    while (cash >= 5)
    {
        cash = cash - 5;
        change++;
    }

    while (cash >= 1)
    {
        cash = cash - 1;
        change++;
    }

    printf("%i\n", change);
}
