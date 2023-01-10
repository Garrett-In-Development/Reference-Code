#include <stdio.h>
#include <stdlib.h>

int main(char** args, size_t argc) {
  int x = 4;
  int * pX = &x;
  printf("%d\n", *pX);

  return 0;
}

