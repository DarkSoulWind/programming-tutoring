#include <stdio.h>

int main() {
  char message[20] = "Hello world";    // Explicit length declaration
  /* char message[] = "Hello world";      // Implicit length declaration */
  /* char *message = "Hello world"; // Pointer declaration */

  printf("Printing each character: ");
  for (int i = 0; i < 20; i++) {
    printf("%c", message[i]);
  }
  printf("\n");

  printf("Printing the entire string: ");
  printf("%s\n", message);

  message[11] = ' ';
  message[12] = 'a';
  message[13] = 'g';
  message[14] = 'a';
  message[15] = 'i';
  message[16] = 'n';
  printf("%s\n", message);

  return 0;
}
