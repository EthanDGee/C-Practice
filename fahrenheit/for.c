#include <stdio.h>

int main() {
  // print out fahrenheit -> celsius for 0, 10, ..., 300
  printf("Fahrenheit | Celsuis\n");
  for (float fahrenheit = 0.0; fahrenheit <= 300.0; fahrenheit += 10.0) {
    float celsius = fahrenheit * 5.0 / 9.0 - 32;
    printf("%4f\t%4f\n", fahrenheit, celsius);
  }
}
