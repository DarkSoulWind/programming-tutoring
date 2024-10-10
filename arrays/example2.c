#include <stdbool.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  // Different types of arrays with different lengths
  /* int integers[5] = {2, 3, 5, 7, 9}; */
  float floats[] = {2.3, 3.5, 5.7, 7.9, 9.11, 11.13, 13.17};
  // long long longAssNumbers[3] = {69420000000000000, 940823498342908432,
  //                                57342101094892};

  // Calculating the number of elements in the array
  int size = sizeof(floats) / sizeof(floats[0]);
  for (int i = 0; i < size; i++) {
    printf("%d: %f\n", i, floats[i]);
  }

  return 0;
}
