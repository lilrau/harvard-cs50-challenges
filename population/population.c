#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int start;

    do
        start = get_int("Start size: ");
    while (start < 9);

    int end;

    do
        end = get_int("End size: ");
    while (end < start);

    int years = 0;
    int i = start;

    if (start == end)
        printf("Years: %i", years);

    else
    {
        do
        {
            i = round(i + (i / 3) - (i / 4));
            years++;
        }
        while (i < end);

        printf("Years: %i",  years);
    }
}
