#include <stdio.h>
#include <stdlib.h>

char *content;

int main(int argc, char **argv)
{
  FILE *inFile = fopen(argv[1], "r");
  if (argc == 0)
  {
    fprintf(stderr, "Not enough arguments passed: exited with code 1");
    exit(1);
  }

  content = malloc(sizeof(char) * 1024);

  char c = fgetc(inFile);
  int i = 0;
  while (c != -1)
  {
    content[i] = c;
    c = fgetc(inFile);
    i++;
  }

  printf("%s\n", content);


  fclose(inFile);
  return 0;
}
