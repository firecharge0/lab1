#include "gettime.h"

#include <stdio.h>

struct Time GetTime() {
  int hours;
  int minutes;
  int seconds;
  printf("What is the current hour: ");
  scanf("%d", &hours);
  printf("What is the current minute: ");
  scanf("%d", &minutes);
  printf("What is the current second: ");
  scanf("%d", &seconds);
  struct Time b;
  b.hour = hours;
  b.minute = minutes;
  b.second = seconds;
  return b;
}