#include <stdio.h>
#include <string.h>
int main() {
  int len, i, lines;
  char s[10001];
  scanf("%d ", &lines);
  for (i =0; i < lines; i++) {
    gets(s);
    /* printf("%s\n", s); */
    /*while (s[i] != '\0') {
      i++;
      }*/
    len = strlen(s);
    printf("%d\n", len);
  }
  return 0;
}
