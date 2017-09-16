#include <stdlib.h>
#include <stdio.h>

int main() {
  // Project Euler #1: Find sum of all the multiples of 3 and 5 less than 1000
  int sum = 0;
  int i;
  for (i = 0; i < 1000; i++) {
    if (i % 3 == 0) sum += i;
    else if (i % 5 == 0) sum += i; // needs to be "else if" so we dont have numbers that are multiples of both 3 and 5 added twice
  }
  printf("The sum of the multiples of 3 and 5 is: %d\n", sum);
  // Project Euler #5: Find LCM of the numbers 1-20
  i = 1;
  int j;
  int breakable = 0; // used as a boolean that is true when we find the answer
  while (i > 0) {
    for (j = 1; j < 21; j++) {
      if (i % j != 0) break; // if i isn't divisible by any number, we discard i
      if (j == 20) {
        printf("The LCM of the integers from 1-20 is %d\n", i);
        breakable = 1; // if we find that i is in fact divisible by all the numbers up to 20, we've found an answer!
      }
    }
    i++;
    if (breakable == 1) break;
  }
}
