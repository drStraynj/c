#include <stdio.h>

int main()
{
  int distance = 100;
  float power = 2.345f;
  double super_power = 56789.4532;
  char initial = 'A';
  char first_name[] = "Zed";
  char last_name[] = "Shaw";

  printf("You are %d miles away.\n", distance);
  printf("You have %f levels of power.\n", power);
  printf("You have %f awesome super powers.\n", super_power);
  printf("%c.\n", initial);
  printf("%s.\n", first_name);
  printf("%s.\n", last_name);

  return 0;
}
