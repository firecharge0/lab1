#include "fillhand.h"

#include <stdio.h>

void Fill_Hand(struct card[] a, struct card[] hand) {
  char[] suits = {'H', 'S', 'D', 'C'};
  char[] values = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'J', 'Q', 'K'};
  for (i = 0; i < 52, i++) {
    a[i].suit = suits[i / 13] a[i].num = values[i % 13]
  }

  for (i = 0; i < 5; i++) {
    int tempt = srand(time(NULL)) % 53;
    hand[i] = a[temp]
  }
}