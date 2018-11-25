# include <stdio.h>

# define BUF_SIZE 128

int main() {
  char * words[100];
  int count = 0;
  char buf[BUF_SIZE];  

  while (count < 4 && scanf("%s", buf) != EOF) {
    words[count] = strdup(buf);
    count++;
  }

  for (int i=0; i<4; i++)
    printf("%s\n", words[i]);
  
}