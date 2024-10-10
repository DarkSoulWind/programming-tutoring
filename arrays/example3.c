#include <stdio.h>

int sum(int array[], int size) {
  int total = 0;
  for (int i = 0; i < size; i++) {
    total += array[i];
  }
  return total;
}

float average(int array[], int size) {
  float sumOfValues = sum(array, size);
  return sumOfValues / size;
}

void swap(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main(int argc, char *argv[]) {
  // for (int i = 0; i < argc; i++) {
  //   printf("arg %d: %s\n", i + 1, argv[i]);
  // }

  int nums1[] = {1, 2, 3, 4, 5};
  printf("%.2f\n", average(nums1, 5));

  int a = 6;
  int b = 9;
  swap(&a, &b);
  printf("a = %d\n", a);
  printf("b = %d\n", b);
  return 0;
}
