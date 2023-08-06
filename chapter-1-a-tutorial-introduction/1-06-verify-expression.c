#include <stdio.h>

int main(void) {
  printf("Press any key: ");
  int c = getchar();
  printf("The getchar() function reads your input: %c\n", c);
  printf("It is then typecast and returned as an integer: %d\n", c);
  printf("EOF (end-of-file) is represented as integer value: %d\n", EOF);
  printf("The expression getchar() != EOF is evaluated as %d != %d,\n", c, EOF);
  printf("which returns the value: %d\n", c != EOF);

  return 0;
}
