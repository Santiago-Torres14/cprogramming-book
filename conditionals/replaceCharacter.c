#include <stdio.h>

/* Copy input to output, replacing tab by \t, each blankspace by \b, and each backslash by \\*/
int main() {
  int c = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      printf("\\n");
    } else if (c == '\t') {
      printf("\\t");
    } else if (c == '\\') {
      printf("\\\\");
    } else if (c == ' ') {
      printf("\\b");
    } else {
      putchar(c);
    }
  }
  return 0;
}
