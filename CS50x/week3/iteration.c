#include <stdio.h>
#include <cs50.h>

void draw(int n);

int main(void)
{
    int height = get_int("height: ");

    draw(height);
}

void draw(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int s = 0; s <= n - i - 1; s++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

