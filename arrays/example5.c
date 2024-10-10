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

int main(int argc, char *argv[]) {
  // 3 students did 3 tests each
  // Each array represents a student's scores
  int testScores[3][3] = {
      {79, 81, 73},
      {45, 39, 41},
      {21, 29, 34},
  };

  for (int i = 0; i < 3; i++) {
    printf("Average of student %d is: %.2f\n", i + 1,
           average(testScores[i], 3));
  }
  return 0;
}
