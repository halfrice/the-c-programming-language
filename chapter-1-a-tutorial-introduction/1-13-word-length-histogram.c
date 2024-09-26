#include <stdio.h>

#define IN 1
#define OUT 0
#define MAXWORDLEN 10

int main(void) {
  int c, i, j, nc, state;

  nc = 0;
  state = OUT;

  // Create histogram array and set default values (zero)
  int histogram[MAXWORDLEN];
  for (i = 0; i < MAXWORDLEN; ++i) {
    histogram[i] = 0;
  }

  printf("Enter a string of chars:\n");
  // Process data and store in histogram
  while ((c = getchar()) != EOF) {
    if (c != ' ' && c != '\n' && c != '\t') {
      if (state == OUT) {
        state = IN;
      }
      ++nc;
    } else {
      if (state == IN && nc > 0) {
        if (nc >= (MAXWORDLEN - 1)) {
          ++histogram[MAXWORDLEN - 1];
        } else {
          ++histogram[nc - 1];
        }
        nc = 0;
        state = OUT;
      }
    }
  }

  // Find the biggest value in histogram
  int biggest = 0;
  for (i = 0; i < MAXWORDLEN; ++i) {
    if (histogram[i] > biggest) {
      biggest = histogram[i];
    }
  }

  // Horizontal graph
  // Create header
  printf("\nHorizontal Word Histogram\n");
  printf("    ");
  for (i = 0; i < biggest; ++i) {
    printf("%3d", i + 1);
  }
  printf("\n    ");
  for (i = 0; i < biggest; ++i) {
    printf("---");
  }
  printf("\n");
  // Build columns (y-axis)
  for (i = 0; i < MAXWORDLEN; ++i) {
    if (i + 1 == MAXWORDLEN) {
      printf("%2d+|", i + 1);
    } else {
      printf("%2d |", i + 1);
    }
    // Build rows (x-axis)
    for (j = 0; j < histogram[i]; ++j) {
      printf("  *");
    }
    printf("\n");
  }

  // Vertical graph
  printf("\nVertical Word Histogram\n");
  // Build rows (x-axis)
  for (i = biggest; i > 0; --i) {
    printf("%2d |", i);
    // Build columns (y-axis)
    for (j = 0; j < MAXWORDLEN; ++j) {
      if (histogram[j] >= i) {
        printf("  *");
      } else {
        printf("   ");
      }
    }
    printf("\n");
  }
  // Create footer
  printf("    ");
  for (i = 0; i < MAXWORDLEN; ++i) {
    printf("---");
  }
  printf("\n    ");
  for (i = 0; i < MAXWORDLEN; ++i) {
    if (i + 1 == MAXWORDLEN) {
      printf("%3d+", i + 1);
    } else {
      printf("%3d", i + 1);
    }
  }
  printf("\n");

  return 0;
}
