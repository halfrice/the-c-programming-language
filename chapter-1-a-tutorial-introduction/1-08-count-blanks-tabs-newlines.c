#include <stdio.h>

int main(void) {
  int c, nb, nt, nl;

  nb = 0; // counter for blanks (spaces)
  nt = 0; // tabs
  nl = 0; // newlines

  while ((c = getchar()) != EOF) {
    if (c == ' ')
      ++nb;
    else if (c == '\t')
      ++nt;
    else if (c == '\n')
      ++nl;
  }

  printf("Blanks: %d\n", nb);
  printf("Tabs: %d\n", nt);
  printf("Newlines: %d\n", nl);

  return 0;
}