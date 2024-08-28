#include "generaterandnumb.h"
#include "getuserguess.h"
#include "verifyguess.h"
int main() {
  int numb = GenerateRandNumb();
  int gues = GetUserGuess();
  VerifyGuess(numb, gues);
  return 0;
}