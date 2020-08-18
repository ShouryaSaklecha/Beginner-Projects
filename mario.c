#include<cs50.h>
#include<stdio.h>
#include<stdio.h>
void pyramid(int n);

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height >= 9);
    pyramid(height);
    
}
void pyramid(int n)

{
    int s;
    int d;
    for (int i = 1; i <= n; i++)
    {
        for (s = (n - i); s > 0; s--)
        {
            printf(" ");
            
        }
        for (d = 1; d <= i; d++)
        {
            printf("#");
            
        }
        printf("\n");
    }
}