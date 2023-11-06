#include <stdio.h>

#define IN 1
#define OUT 0

/* Count lines, words, and characters in input */
int main() {
  int c, nl, nw, nc, state;

  state = OUT;
  nl = nw = nc = 0;

  while ((c = getchar()) != EOF) {
    ++nc;

    if (c == '\n')
      ++nl;

    /* there is an error when there is a comman or sign*/
    if (c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
    } else if (state == OUT) {
      state = IN;
      ++nw;
    }

    /*print every word in a new line*/
    if (c != ' ' && c != '\n' && c != '\t')
        putchar(c);
    else
        printf("\n");
  }

  printf("%d %d %d\n", nl, nw, nc);

  return 0;
}
