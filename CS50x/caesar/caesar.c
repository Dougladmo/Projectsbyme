#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int get_leng(string text);

int main(int argc, string argv[])
{
//print error message and how to use the program and finish it. if the argc is different of 2
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    //print error message how to use the program and finish it. if the key is not a digit.
    for (int a = 0; a < strlen(argv[1]); a++)
    {
        //make the program dont get undigits characters
        if (!isdigit(argv[1] [a]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    //declaration of variables used.
    int key = atoi(argv[1]);
    string text = get_string("PlainText:");
    int length = get_leng(text);
    printf("ciphertext: ");

    for (int i = 0; i < length; i++)
    {
        //encipher the text and resets the count if the key goes throuhgt the z in the alphabet using UPPERCASE
        if (isupper(text[i]))
        {
            printf("%c", (text[i] - 65 + key) % 26 + 65);
        }
        //encipher the text and resets the count if the key goes throuhgt the z in the alphabet using lowercase
        else if (islower(text[i]))
        {
            printf("%c", (text[i] - 97 + key) % 26 + 97);
        }
        //in the case of the character is not a letter, it is going to show the same character withot cipher
        else
        {
            printf("%c", text[i]);
        }
    }
    printf("\n");
}
//just take the length of the text
int get_leng(string text)
{
    int len;
    len = strlen(text);
    return len;
}