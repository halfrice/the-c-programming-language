#include <stdio.h>

int main(void) {
  int c, pc;

  while ((c = getchar()) != EOF) {
    if (c != ' ' || pc != ' ') 
      putchar(c);
    pc = c;
  }

  return 0;
}
