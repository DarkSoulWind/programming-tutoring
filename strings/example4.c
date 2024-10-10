#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char msg1[26] = "Always drama ";
  char msg2[] = "when I ring";
  /* char* msg3 = msg1 + msg2; // THIS DOES NOT WORK */

  // int totalLength = strlen(msg1) + strlen(msg2);
  // char msg3[totalLength];
  // int i;
  // for (i = 0; i < strlen(msg1); i++) {
  //   msg3[i] = msg1[i];
  // }
  // for (; i < totalLength; i++) {
  //   msg3[i] = msg2[i - strlen(msg1)];
  // }
  // msg3[totalLength] = '\0';
  // printf("msg3 = %s\n", msg3);

  // /* Using the standard library function like a normal person */
  // strcat(msg1, msg2); // msg1 will be overwritten (msg1 = msg1 + msg2)
  // printf("msg1 = %s\n", msg1);

  return 0;
}
