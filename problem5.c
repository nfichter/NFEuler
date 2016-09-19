//problem 5: smallest positive number that is evenly divisible by all of the numbers 1 to 20

#include <stdio.h>
#include <stdlib.h>

int main() {
  int num = 20; //outcome - start this at 20 since we know it will have to be divisile by 20 (increment by 20 every time)
  int oneToTwenty = 1; //counter for 1-20
  int numCorrect = 0; //if this == 20 at the end of a loop, we know it's correct
  while (numCorrect != 20) {
    numCorrect = 0;
    /*
    for (oneToTwenty = 1; oneToTwenty < 21; oneToTwenty++) { *THIS VERSION IS VERY SLOW, WHICH IS WHY I CHANGED TO BRUTE FORCE ALGORITHM*
      if (num % oneToTwenty != 0) {
	break;
      }
      else {
	numCorrect++;
      }
    }
    */
    //brute force: skip 1 (all #s are mult), 6 (if mult of 2 & 3 then mult of 6), 10 (2&5 --> 10), 12 (3&4 --> 12), 14 (2&7 --> 14), 15 (3&5 --> 15), 18 (2&9 --> 18)
    if (num % 2 == 0 && num % 3 == 0 && num % 4 == 0 && num % 5 == 0 && num % 7 == 0 && num % 8 == 0 && num % 9 == 0 &&
	num % 11 == 0 && num % 13 == 0 && num % 16 == 0 && num % 17 == 0 && num % 19 == 0 && num % 20 == 0) {
      numCorrect = 20;
    }
    num += 20;
  }
  printf("Answer to problem 5:  %d\n",num);
}
