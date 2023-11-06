#include <stdio.h>

/* Replace one or more blanks by a single blank*/
int main() {
  int previous, current;
  previous = current = 0;

  while ((current = getchar()) != EOF) {
      if (current != ' ' || previous != ' ') {
          putchar(current);
      }
      previous = current;
  }

  return 0;
}
