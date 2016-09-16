//problem 1: sum of multiples of 3 and 5 below 1000

#include <stdio.h>
#include <stdlib.h>

int main() {
  int counter = 0;
  int sum = 0;
  for (counter; counter < 1000; counter++) {
    if (counter % 3 == 0 || counter % 5 == 0) {
      sum += counter;
    }
  }

  printf("Answer to problem 1: %d\n",sum);
}
