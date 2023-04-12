#include <cs50.h>
#include <stdio.h>

int main(void)

{
//input
    int x = get_int("number1: ");
// conditional1
    if (x >= 1 && x <= 8)
    {
        printf("x is usable\n");
    }
//conditional1
//----------------
//conditional2
    else
    {
        printf("deu ruim\n");
    }
//conditional2
}