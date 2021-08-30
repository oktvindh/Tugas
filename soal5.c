#include <stdio.h>
#include <math.h>

int main() {
  double x;
  scanf("%f", &x);
  int y;
  y = x;
  double z;
  z = x - y;
  printf("%d %.5f", &y, &z);
  return 0;
}