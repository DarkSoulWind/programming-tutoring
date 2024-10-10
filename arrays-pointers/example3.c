#include <stdio.h>

int linear_search(int nums[], size_t length, int target) {
  for (size_t i = 0; i < length; i++) {
    if (nums[i] == target) { // target acquired
      return 0;
    }
  }
  return 404; // error not found
}

// linear search using pointer addition
int linear_search_pa(int *nums, size_t length, int target) {
  for (int *c = nums; c < nums + length; c++) {
    if (*c == target) { // target acquired
      return 0;
    }
  }
  return 404; // error not found
}

// show pointer arithmetic using arrays
int main(int argc, char *argv[]) {
  int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  const int target = 10;

  printf("Without using pointer arithmetic:\n");
  if (linear_search(nums, sizeof(nums) / sizeof(nums[0]), target) == 0) {
    printf("%d has been found!\n", target);
  } else {
    printf("%d has not been found :(\n", target);
  }

  printf("Using pointer arithmetic:\n");
  if (linear_search_pa(nums, sizeof(nums) / sizeof(nums[0]), target) == 0) {
    printf("%d has been found!\n", target);
  } else {
    printf("%d has not been found :(\n", target);
  }

  return 0;
}
