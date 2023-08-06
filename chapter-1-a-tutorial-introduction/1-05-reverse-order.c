#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main(void) {
  float fahr, celsius;

  printf("---------------------------\n");
  printf("| Fahrenheit |    Celsius |\n");
  printf("|------------+------------|\n");
  for (fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("| %10.1f | %10.1f |\n", fahr, celsius);
  }
  printf("---------------------------\n");

  return 0;
}
