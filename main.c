#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Driver code
int main() {
  char ch;
  char print[500];
  char line[500];
  char cmd[500];
  char c[1000];
  FILE *fptr;
  if ((fptr = fopen("main.main", "r")) == NULL) {
    printf("Error! File cannot be opened.");
    // Program exits if the file pointer returns NULL.
    exit(1);
  }

  // reads text until newline is encountered
  fscanf(fptr, "%[^\n]", c);
  printf("Data from the file:\n%s", c);
  fclose(fptr);

  return 0;
}