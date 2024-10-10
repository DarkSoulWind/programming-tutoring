#include <stdio.h>

int main(int argc, char *argv[])
{
  // // Explicit size declaration
  // int integers[5] = {2, 3, 5, 7, 9};

  // integers
  // |---|---|---|---|---|
  // | 2 | 3 | 5 | 7 | 9 | --- Values
  // |---|---|---|---|---|
  // | 0 | 1 | 2 | 3 | 4 | --- Index positions
  // |---|---|---|---|---|
  //

  // Implicit size declaration
  /* int integers[] = {2, 3, 5, 7, 9}; */

  /* Defining values after declaration */
  int integers[5];
  integers[0] = 2;
  integers[1] = 3;
  integers[2] = 5;
  integers[3] = 7;
  integers[4] = 9;

  for (int i = 0; i < 5; i++) {
    printf("Element at index %d: %d\n", i, integers[i]);
  }

  return 0;
}
