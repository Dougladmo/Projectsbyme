#include <stdio.h>
#include <cs50.h>

int main(void)

{

//print hello in the screen
    string name;
    name = get_string("please type your name: ");

    printf("hello, %s !! \n", name);

}