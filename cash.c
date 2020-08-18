#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int change_owed;

    do
    {
        float dollars = get_float("Change owed: ");
        change_owed = round(dollars * 100);
    }
    while (change_owed <= 0);

    int q = change_owed / 25;
    int d = (change_owed % 25) / 10;
    int n = ((change_owed % 25) % 10) / 5;
    int p = ((change_owed % 25) % 10) % 5;

    printf("Minimum coins: %d\n", q + d + n + p);
}