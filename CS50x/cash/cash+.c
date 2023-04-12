#include <cs50.h>
#include <math.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - (quarters * 25);

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - (dimes * 10);

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - (nickels * 5);

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - (pennies * 1);

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf(", %i coins total.\n", coins);
}

int get_cents(void)
{
    // TODO
    // ask how many cents there is c = cents
    int c;
    do
    {
        c = get_int("Cents :");
    }
    while (c < 1);

    return c;
}

int calculate_quarters(int cents)
{
    // TODO
    int quarters = 1;
    int q = cents / (quarters * 25);
    cents = cents / (quarters * 25);
    printf("%i quarters,", q);

    return cents;
}

int calculate_dimes(int cents)
{
    // TODO
    int dimes = 1;
    int d = cents / (dimes * 10);
    cents = cents / (dimes * 10);
    printf(" %i dimes,", d);
    return cents;
}

int calculate_nickels(int cents)
{
    // TODO
    int nickels = 1;
    int n = cents / (nickels * 5);
    cents = cents / (nickels * 5);
    printf(" %i nickels,", n);
    return cents;
}

int calculate_pennies(int cents)
{
    // TODO
    int pennies = 1;
    int p = cents / (pennies * 1);
    cents = cents / (pennies * 1);
    printf(" %i pennies", p);
    return cents;
}