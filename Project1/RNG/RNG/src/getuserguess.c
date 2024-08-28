#include "getuserguess.h"

#include <stdio.h>
int GetUserGuess() {
  int guess;
  printf("Guess a number between 1 and 100: ");
  scanf("%d", &guess);
  return guess;
}
