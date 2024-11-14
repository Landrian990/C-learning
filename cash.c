#include <stdio.h>

int main()
{
  int cents;

  do
  {
    printf("How much change is owed? ");
    scanf("%d", &cents);
  } while (cents < 0);

  int quarters = cents / 25;
  cents %= 25;
  int dimes = cents / 10;
  cents %= 10;
  int nickels = cents / 5;
  cents %= 5;
  int pennies = cents;

  printf("Minimum number of coins: %d\n", quarters + dimes + nickels + pennies);

  return 0;
}