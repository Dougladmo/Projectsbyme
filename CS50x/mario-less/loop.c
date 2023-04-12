#include <stdio.h>
#include <cs50.h>

int main(void)

{
    int x;
    do
{
    x = get_int("x: ");
}
    while(1 > x || 8 < x);

}