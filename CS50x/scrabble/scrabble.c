#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    if (score1 > score2)
    {
        printf("Player 1 wins! %i\n", score1);
    }
    if (score2 > score1)
    {
        printf("Player 2 wins!\n");
    }
    if (score1 == score2)
    {
        printf("Tie!\n");
    }
}

int compute_score(string word)
{
    // TODO: Compute and return score for string

    //Take the size of the word
    int length = strlen(word);
    int cs = 0;
    int i;
    //make the int i growing till It is equal to the size of the word
    for (i = 0; i <= length; i++)
    {
        //Conditionals to atribute the POINTS in the letters of the word
        if (isupper(word[i]))
        {
            cs = cs + POINTS[word[i] - 65];
        }
        if (islower(word[i]))
        {
            cs = cs + POINTS[word[i] - 97];
        }
        //conditional to don't consider if the characters are especials characters like "!@#$%".
        if (word[i] >= 0 && word[i] <= 64)
        {
            cs = cs + 0;
        }
    }
    return cs;
}

