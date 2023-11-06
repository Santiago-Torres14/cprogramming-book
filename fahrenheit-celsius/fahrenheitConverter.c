#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;   // lower limit of temperature table
  upper = 300; // upper limit
  step = 20;   // step size

  fahr = lower;

  printf("farenheit\tcelsius\n");
  while (fahr <= upper) {
    celsius = 5.0 * (fahr - 32.0) / 9.0;
    printf("%3.0f\t%6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }

  /* Using a for loop for the same scenario*/

  int celsius2;
  printf("celsius\tfarenheit\n");
  for (celsius2 = LOWER; celsius2 <= UPPER; celsius2 += STEP) {
        printf("%3d\t%6d\n", celsius2, (9 *celsius2)/5 + 32);
  }
}
