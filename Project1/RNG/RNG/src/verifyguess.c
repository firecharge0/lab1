#include "verifyguess.h"

#include <stdio.h>
void VerifyGuess(int a, int b) {
  if (a == b) {
    printf("correct");
  } else {
    printf("try again");
  }
};