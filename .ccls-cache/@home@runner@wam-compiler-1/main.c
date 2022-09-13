#include <stdio.h>

int main(void) {

  char filename[500];
  char print[500];
  printf("file name?\n");
  scanf("%s.wam", filename);
  FILE *fp;

  fp = fopen("test.wam", "w+");
  fputs("This is testing for fputs...\n", fp);
  fgetc("wam.print(%s", );

  fclose(fp);
  return 0;
}