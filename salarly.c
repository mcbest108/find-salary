#include <stdio.h>
#include <cs50.h>

int main (void)
{
  float s = get_float("Hourly Wage: ");

  int h = get_int("Hours Per Week: ");

  int t = s * h;
  int m = t * 4;

  printf("You will make, before tax: \n" );

  printf("$%i per week\n", t);
  printf("$%i bi weekly\n", t * 2);
  printf("$%i a month\n", t * 4);
  printf("%i a year\n", m * 12);
  printf("%i every 5 years\n", m * 60);
  printf("%i in a decade\n", m * 120);
}
