#include <stdio.h>

int main(int argc, char *argv[]) {
  int matrix[3][3] = {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9},
  };

  for (int row = 0; row < 3; row++) {
    for (int column = 0; column < 3; column++) {
      printf("%d ", matrix[row][column]);
    }
    printf("\n");
  }

  return 0;
}
