#include <stdio.h>

float convertToCelsius(float n);
float convertToFahrenheit(float n); // Unused for this example

int main() {
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;
  fahr = lower;

  printf("---------------------------\n");
  printf("| Fahrenheit |    Celsius |\n");
  printf("|------------+------------|\n");
  while (fahr <= upper) {
    printf("| %10.1f | %10.1f |\n", fahr, convertToCelsius(fahr));
    fahr = fahr + step;
  }
  printf("---------------------------\n");

  return 0;
}

float convertToCelsius(float n) { return (5.0 / 9.0) * (n - 32.0); }
float convertToFahrenheit(float n) { return ((9.0 / 5.0) * n) + 32.0; }
