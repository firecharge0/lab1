#include "generaterandnumb.h"
#include "getuserguess.h"
#include "verifyguess.h"
int main() {
  int numb = GenerateRandNumb();
  int guess = GetUserGuess();
  VerifyGuess(numb, guess);
  return 0;
}
