//problem 5: smallest positive number that is evenly divisible by all of the numbers 1 to 20

#include <stdio.h>
#include <stdlib.h>

int main() {
  int counter = 1;
  int oneToTwenty = 1;
  int numCorrect = 0;
  while (1) {
    numCorrect = 0;
    for (oneToTwenty = 1; oneToTwenty < 21; oneToTwenty++) {
      if (counter % oneToTwenty != 0) {
	break;
      }
      else {
	numCorrect++;
      }
    }
    if (numCorrect == 20) {
      break;
    }
    printf("%d %d\n",counter, numCorrect);
    counter++;
  }
  printf("Answer to problem 5:  %d\n",counter);
}
