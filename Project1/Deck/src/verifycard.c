#include "verifycard.h"

#include <stdio.h>

void VerifyCard(struct card[] hand) {
  for (i = 0; i < 5; i++) {
    printf("%s%s", hand[i].suit, hand[i].num);
  }
}