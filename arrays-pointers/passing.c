#include <stdio.h>

// does this work?
void swap(int a, int b)
{
  int temp = a;
  a = b;
  b = temp;
}

// // wtf is this
// void swap(int* a, int* b)
// {
//   int temp = *a;
//   *a = *b;
//   *b = temp;
// }

int main(int argc, char *argv[])
{
  int a = 6;
  int b = 9;

  printf("Before swap: a = %d, b = %d\n", a, b);
  swap(a, b);
  printf("After swap: a = %d, b = %d\n", a, b);
  return 0;
}
