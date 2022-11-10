#include <stdio.h>
#include <stdlib.h>

void mergesort(int *v, int n);
void sort(int *v, int *c, int i, int f);
void merge(int *v, int *c, int i, int m, int f);

int main (void) {
  int i;
  int v[8] = { -1, 7, -3, 11, 4, -2, 4, 8 };

  mergesort(v, 8);

  for (i = 0; i < 8; i++) printf("%d ", v[i]);

  return 0;
}

void mergesort(int *array, int n) {
  int *c = malloc(sizeof(int) * n);
  sort(array, c, 0, n - 1);
  free(c);
}


void sort(int *array, int *c, int i, int f) {
  if (i >= f) return;

  int m = (i + f) / 2;

  sort(array, c, i, m);
  sort(array, c, m + 1, f);

  if (array[m] <= array[m + 1]) return;

  merge(array, c, i, m, f);
}


void merge(int *array, int *c, int i, int m, int f) {
  int z,
      iv = i, ic = m + 1;

  for (z = i; z <= f; z++) c[z] = array[z];

  z = i;

  while (iv <= m && ic <= f) {

    if (c[iv] <= c[ic]) array[z++] = c[iv++];
    else array[z++] = c[ic++];
  }

  while (iv <= m) array[z++] = c[iv++];

  while (ic <= f) array[z++] = c[ic++];
}