#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char original[] = "Where's my crown? That's my bling";
  int length = strlen(original);

  printf("Before modifying copy:\n");
  printf("Original: %s\n", original);

  /* What if we modify the copy? */
  char* copy = original;
  printf("Copy: %s\n", copy);
  copy[11] = 'b';
  printf("\nAfter modifying copy:\n");
  printf("Original: %s\n", original);
  printf("Copy: %s\n", copy);

  // char copy[length];
  // for (int i = 0; i < length; i++) {
  //   copy[i] = original[i];
  // }
  // printf("Copy: %s\n", copy);
  //
  // copy[11] = 'b';
  // printf("\nAfter modifying copy:\n");
  // printf("Original: %s\n", original);
  // printf("Copy: %s\n", copy);

  // /* Using the standard library function like a normal person */
  // char copy[length];
  // strcpy(copy, original);
  // printf("Copy: %s\n", copy);
  //
  // copy[11] = 'b';
  // printf("\nAfter modifying copy:\n");
  // printf("Original: %s\n", original);
  // printf("Copy: %s\n", copy);

  return 0;
}
