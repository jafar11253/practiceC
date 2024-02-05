
#include <stdio.h>

int main() {
  char char1 = 'X';
  char char2 = 'M';
  char char3 = 'L';

  char reversed[4] = {char3, char2, char1, '\0'};


  printf("The reverse of %c%c%c is %s\n", char1, char2, char3, reversed);

  return 0;
}
