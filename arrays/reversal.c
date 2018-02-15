#include <stdio.h>

void reverseArray(int arr[], int start, int end)
{
  int temp;

  while(start < end)
  {
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    start++;
    end--;
  }
}

void leftRotate(int arr[], int d, int size)
{
  reverseArray(arr, 0, d-1);
  reverseArray(arr, d, size-1);
  reverseArray(arr, 0, size-1);  
}

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
  
  printf("\n");
}

int main()
{
  int arr[] = {1,2,3,4,5,6,7,8};
  int size = sizeof(arr) / sizeof(int);
  
  leftRotate(arr, 3, size);
  printArray(arr, size);

  return 0;
}