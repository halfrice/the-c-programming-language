#include <stdio.h>

#define IN 1
#define OUT 0

int main(void) {
  int c, state;

  state = OUT;

  while ((c = getchar()) != EOF) {
    if (c != ' ' && c != '\n' && c != '\t') {
      if (state == OUT) 
        state = IN;
      putchar(c);
    }
    else if (state == IN) {
      state = OUT;
      putchar('\n');
    }
  }

  return 0;
}
