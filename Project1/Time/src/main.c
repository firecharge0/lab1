#include <stdio.h>

#include "gettime.h"
#include "printtime.h"
#include "time.h"

void main() {
  struct Time s;
  s.hour = 15;
  s.minute = 2;
  s.second = 32;
  PrintTime(s);
  struct Time u = GetTime();
  PrintTime(u);
}