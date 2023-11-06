#include <stdio.h>

/* write a program to count blanks, tabs and new lines*/
int main() {
  int tabs = 0, blanks = 0, lines = 0, c;

  while ((c = getchar()) != EOF) {
    switch (c) {
    case '\n':
      ++lines;
      break;
    case '\t':
      ++tabs;
      break;
    case ' ':
      ++blanks;
      break;
    default:
      break;
    }
  }
  printf("tabs: %d\n", tabs);
  printf("blanks: %d\n", blanks);
  printf("lines: %d\n", lines);
  return 0;
}
