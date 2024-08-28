#include "printtime.h"

#include <stdio.h>

#include "time.h"

int PrintTime(struct Time a) {
  printf(":%02d:%02d:%02d:", a.hour, a.minute, a.second);
  return 0;
}