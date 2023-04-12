#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{
int column;
int line;
int height;
//loop for ask the question if the number is too small or too big.
    do
    {
        height = get_int("height: ");
    }
    while (1 > height || 8 < height);
//
            for (line = 0; line < height; line++)
            {
                for (column = 0; column <= line; column++)
                {
                    printf("#");
                }
                 printf("\n");
            }
}