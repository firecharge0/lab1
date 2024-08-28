#include "generaterandnumb.h"

#include <stdio.h>
int GenerateRandNumb() {
  __time_t timer = time(NULL);
  int c = srand(timer) % MAX_NUMBER + 1;
  return c;
}
