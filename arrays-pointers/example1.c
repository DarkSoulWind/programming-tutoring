#include <stdio.h>

int main(int argc, char *argv[]) {
  int arr[4] = {1, 2, 3, 4};

  /* 
   * arr ________
   *             |
   *           __|____________________
   * Value    |  1  |  2  |  3  |  4  |
   *          |-----------------------|
   * Location | 0x0 | 0x1 | 0x2 | 0x3 |
   *          |_____|_____|_____|_____|
   * */

  int *k = arr;
  printf("Before modifying k pointer:\n");
  printf("arr[0] = %d\n", arr[0]);
  printf("*arr = %d\n", *arr);
  printf("*k = %d\n", *k);

  /* 
   * arr ________
   *             |
   *           __|____________________
   * Value    | 69  |  2  |  3  |  4  |
   *          |-----------------------|
   * Location | 0x0 | 0x1 | 0x2 | 0x3 |
   *          |_____|_____|_____|_____|
   * */

  *k = 69;
  printf("After modifying k pointer:\n");
  printf("arr[0] = %d\n", arr[0]);
  printf("*arr = %d\n", *arr);
  printf("*k = %d\n", *k);

  return 0;
}
