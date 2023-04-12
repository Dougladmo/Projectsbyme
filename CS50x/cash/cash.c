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
    printf("%i\n", coins);
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
    cents = cents / (quarters * 25);
    return cents;
}

int calculate_dimes(int cents)
{
    // TODO
    int dimes = 1;
    cents = cents / (dimes * 10);
    return cents;
}

int calculate_nickels(int cents)
{
    // TODO
    int nickels = 1;
    cents = cents / (nickels * 5);
    return cents;
}

int calculate_pennies(int cents)
{
    // TODO
    int pennies = 1;
    cents = cents / (pennies * 1);
    return cents;
}
