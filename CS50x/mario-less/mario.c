#include <stdio.h>
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
    //make the rows
    for (line = 0; line < height; line++)
    {
        //aline the rows adding blank spaces
        for (int space = 0; space < height - line - 1; space++)
        {
            printf(" ");
        }
        //print the hashes alined in the spaces that missed
        for (column = 0; column <= line; column++)
        {
            printf("#");
        }
        printf("  ");
        //print the other side of the stair
        for (column = 0; column <= line; column++)
        {
            printf("#");
        }
        printf("\n");
    }

}
