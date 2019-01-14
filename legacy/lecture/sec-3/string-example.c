#include <stdio.h>
#include <string.h>

# define BUF_SIZE 20

int main() {
    char buf[BUF_SIZE];
    int new_line_idx;

    new_line_idx = read_line(buf, BUF_SIZE);
    printf("%s:%d\n", buf, new_line_idx);
}

int read_line(char str[], int limit) {
  int ch;
  int idx = 0;

  while ((ch = getchar()) != '\n') {
    if (idx < limit - 1)
      str[idx++] = ch;
  }

  str[idx] = '\0';

  return idx;
}