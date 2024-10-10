#include <stdio.h>

int main(int argc, char *argv[])
{
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  printf("Printing array using indices and square bracket syntax:\n");
  for (int i = 0; i < 10; i++) {
    printf("%d, ", arr[i]);
  }
  printf("\n");


  printf("Printing array using pointer syntax:\n");
  for (int* i = arr; i < arr + 10; i++) {
    printf("%d, ", *i);
  }
  printf("\n");

  // // exercise: change it so that it uses pointers instead of square brackets to multiply all elements by 2
  // printf("Printing array using pointer syntax:\n");
  // for (int* i = arr; i < arr + 10; i++) {
  //   // code here...
  //   printf("%d, ", *i);
  // }
  // printf("\n");

  return 0;
}
