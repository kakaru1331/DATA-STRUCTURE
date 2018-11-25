#include <stdio.h>
#include <stdlib.h>

int main() {
  int * arr = malloc(4 * sizeof(int));

  for (int i=0; i<4; i++) {    
    *(arr+i) = i+1;
    printf("%d\n", *(arr+i));
  }

  int * tmp = malloc(sizeof(arr) * 2);
  for (int j=0; j<4; j++) {
    tmp[j] = arr[j];
  }
  free(arr);
  arr = tmp;
  free(tmp);
  
  for (int i=0; i<8; i++) {
    printf("arr[%d]: %d\n", i, *(arr+i));
  }
}
