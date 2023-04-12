#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
//variables
    float grade1 = get_float("what was your first grade ?\n");
    float grade2 = get_float("what was your second grade ?\n");
    float total_lectures = get_int("how many lectures did you have?\n");
    float lectures_view = get_int("how many lectures did you see?\n");
    int frequency = ((float) lectures_view / (float) total_lectures) * 100;
    int mgrade = (grade1 + grade2) / 2;
//code
// conditionals to decide if the student has been approved
    if (mgrade < 4)
    {
        printf("Disapproved by grade\n");
    }
    else if (frequency < 75)
    {
        printf("Disapproved by frequency\n");
    }
    else if (mgrade >= 7 && frequency >= 75)
    {
        printf("Approved!\n");
    }
    else if (mgrade < 7 && frequency >= 75)
    {
        int grademin = round(10 - mgrade);
        printf("you must take %i to get approved !!\n", grademin);
    }
}