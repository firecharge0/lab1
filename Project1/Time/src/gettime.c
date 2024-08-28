#include "gettime.h"

#include <stdio.h>

struct Time GetTime() {
  int hours = 24;
  int minutes = 60;
  int seconds = 60;
  while (hours > 23 || hours < 0) {
    printf("What is the current hour: ");
    scanf("%d", &hours);
  };
  while (minutes > 59 || minutes < 0) {
    printf("What is the current minute: ");
    scanf("%d", &minutes);
  };
  while (seconds > 59 || seconds < 0) {
    printf("What is the current second: ");
    scanf("%d", &seconds);
  };
  struct Time b;
  b.hour = hours;
  b.minute = minutes;
  b.second = seconds;
  return b;
}