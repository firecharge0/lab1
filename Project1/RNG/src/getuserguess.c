#include "getuserguess.h"

#include <stdio.h>
int GetUserGuess() {
  int guess;
  printf("Guess a number");
  scanf("%d", guess);
  return guess;
}
