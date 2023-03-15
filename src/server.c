#include "../include/interface.h"
#include <stdio.h>
#include <stdlib.h>

int countLetter(char letter, char *sentence) {
  int number = 0;
  for (int i = 0; i < strlen(sentence); i++) {
    if (sentence[i] == letter) {
      number++;
    }
  }
  return number;
}