#include <stdio.h>

#define MAXCHARS 94 // Range of all text based ASCII chars
#define OFFSET 32   // First text ASCII char value

int main() {
  int i, c;
  int histogram[MAXCHARS];

  // Create histogram and set default values
  for (i = 0; i < MAXCHARS; ++i)
    histogram[i] = 0;

  printf("Enter some text:\n");
  // Process data and store in histogram
  while ((c = getchar()) != EOF) {
    if (c >= 32 && c <= 126) {
      ++histogram[c - OFFSET];
    }
  }

  // Display frequency table
  printf("Char | Freq\n");
  printf("-----------\n");
  for (i = 0; i < MAXCHARS; ++i) {
    if (histogram[i] > 0) {
      printf(" \"%c\" | %d\n", OFFSET + i, histogram[i]);
    }
  }
  printf("\n");

  return 0;
}
