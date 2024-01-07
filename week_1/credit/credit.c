#include <stdio.h>

int main(void)
{
    long int number;
    printf("Number: ");
    scanf("%ld", &number);

    int last = number % 10;
    int last_2 = (number % 100) / 10;
    int last_3 = (number % 1000) / 100;
    int last_4 = (number % 10000) / 1000;
    int last_5 = (number % 100000) / 10000;
    int last_6 = (number % 1000000) / 100000;
    int last_7 = (number % 10000000) / 1000000;
    int last_8 = (number % 100000000) / 10000000;
    int last_9 = (number % 1000000000) / 100000000;
    int last_10 = (number % 10000000000) / 1000000000;
    int last_11 = (number % 100000000000) / 10000000000;
    int last_12 = (number % 1000000000000) / 100000000000;
    int last_13 = (number % 10000000000000) / 1000000000000;
    int last_14 = (number % 100000000000000) / 10000000000000;
    int last_15 = (number % 1000000000000000) / 100000000000000;
    int last_16 = (number % 10000000000000000) / 1000000000000000;
    int last_17 = (number % 100000000000000000) / 10000000000000000;

    int second_to_last = last_2 * 2;
    int fourth_to_last = last_4 * 2;
    int sixth_to_last = last_6 * 2;
    int eighth_to_last = last_8 * 2;
    int tenth_to_last = last_10 * 2;
    int twelvth_to_last = last_12 * 2;
    int fourteenth_to_last = last_14 * 2;
    int sixteenth_to_last = last_16 * 2;

    int split_1 = second_to_last / 10;
    int split_2 = second_to_last % 10;

    int split_3 = fourth_to_last / 10;
    int split_4 = fourth_to_last % 10;

    int split_5 = sixth_to_last / 10;
    int split_6 = sixth_to_last % 10;

    int split_7 = eighth_to_last / 10;
    int split_8 = eighth_to_last % 10;

    int split_9 = tenth_to_last / 10;
    int split_10 = tenth_to_last % 10;

    int split_11 = twelvth_to_last / 10;
    int split_12 = twelvth_to_last % 10;

    int split_13 = fourteenth_to_last / 10;
    int split_14 = fourteenth_to_last % 10;

    int split_15 = sixteenth_to_last / 10;
    int split_16 = sixteenth_to_last % 10;

    int sum = split_1 + split_2 + split_3 + split_4 + split_5 + split_6 + split_7 + split_8 + split_9 + split_10 + split_11 +
              split_12 + split_13 + split_14 + split_15 + split_16;

    int result = sum + last + last_3 + last_5 + last_7 + last_9 + last_11 + last_13 + last_15 + last_17;

    result = result % 10;

    if (result == 0 && last_15 == 3 && (result == 0 && last_14 == 7))
    {
        printf("AMEX\n");
    }

    else if ((result == 0 && (last_13 == 4)) || (result == 0 && (last_16 == 4)))
    {
        printf("VISA\n");
    }

    else if (result == 0 && last_16 == 5 && (last_15 == 1 || last_15 == 2 || last_15 == 3 || last_15 == 4 || last_15 == 5))
    {
        printf("MASTERCARD\n");
    }
    else
    {
        printf("INVALID\n");
    }
}
