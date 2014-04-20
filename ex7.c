#include <stdio.h>

int main(int argc, char *argv[])
{
  int bugs = 100;
  double bug_rate = 1.2;

  printf("you have %d bugs at the imaginary rate of %f.\n",
         bugs, bug_rate);
  long universe_of_defects = 1L * 1024L * 1024L * 1024L;
  printf("The entire universe has %ld bugs.\n", universe_of_defects);

  return 0;
}
