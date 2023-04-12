#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

string get_text(void);
float calculate_letters_average(string text, int word, int length);
int count_words(string text, int length);
int calculate_index(float L, float S);
float calculate_sentences_average(string text, int word, int length);
int text_length(string text);


int main(void)
{
    //get the text from the user.
    string text = get_text();
    //get the size of the text.
    int length = text_length(text);
    //count the number of words of the text.
    int word = count_words(text, length);
    //average of letter per 100 words
    float L = calculate_letters_average(text, word, length);
    //average of sentences per 100 words
    float S = calculate_sentences_average(text, word, length);
    //result of coleman-liau index.
    int index = calculate_index(L, S);

    //conditional to decide the grade
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    if (index > 16)
    {
        printf("Grade 16+\n");
    }
    if (16 > index && index > 1)
    {
        printf("Grade %i\n", index);
    }
}
//get the text typed from the user
string get_text(void)
{
    string t = get_string("Text:");
    return t;
}
//get the size of the whole text
int text_length(string text)
{
    int Length = strlen(text);
    return Length;
}
//calculate the average of letters per 100 words
float calculate_letters_average(string text, int word, int length)
{
    int letters = 0;
    float L_average;

    for (int i = 0; i <= length - 1; i++)
    {
        //Conditionals to count just letters
        if (isalpha(text[i]))
        {
            letters++;
        }
        //conditional to don't consider if the characters are especials characters like "!@#$%".
    }
    L_average = (float) letters / (float) word * 100;
    return L_average;
}
//calculate the number of words in the text
int count_words(string text, int length)
{
    int words = 1;
    for (int i = 0; i <= length; i++)
    {
        if (text[i] == ' ')
        {
            words++;
        }
    }

    return words;
}
//coleman-liau index to calculate the grades
int calculate_index(float L, float S)
{
    int index;
    index = round(0.0588 * L - 0.296 * S - 15.8);

    return index;
}
//calculate the average of sentences per 100 words
float calculate_sentences_average(string text, int word, int length)
{
    int sentences = 0;
    float S_average;

    for (int i = 0; i <= length; i++)
    {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sentences++;
        }
        else
        {
        }
        S_average = (float) sentences / (float) word * 100;
    }
    return S_average;
}

