#include <stdio.h>

int concat(int * a, int an, int * b, int bn, int * c) {
  if (!a || !b || !c)
    return -1;
  int i;
  for (i = 0; i < an; i++)
    c[i] = a[i];
  for (i = 0; i < bn; i++)
    c[an + i] = b[i];
  return 0;
}

int main() {
  int a[] = {0, 1, 2};
  int b[] = {3, 4, 5, 6};
  int c[7];
  concat(a, 3, b, 4, c);
  int i;
  for (i = 0; i < 7; ++i)
    printf("%d ", c[i]);
  printf("\n");
  return 0;
}
