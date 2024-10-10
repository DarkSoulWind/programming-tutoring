#include <stdio.h>

int my_strlen(const char* string)
{
  int length = 0;
  int i = 0;
  while (string[i] != '\0') {
    length++;
    i++;
  }
  return length;
}

// exercise: explain this
int my_strlen_cooler(const char* string)
{
  const char* c = string;
  for (; *c != '\0'; c++) { }
  return c - string;
}

int main(int argc, char *argv[])
{
  const char* mystr = "skbd";
  printf("my_strlen() = %d\n", my_strlen(mystr));
  printf("my_strlen_cooler() = %d\n", my_strlen_cooler(mystr));

  return 0;
}
