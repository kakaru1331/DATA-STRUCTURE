#include <stdio.h>

void leftRotatebyOne(int arr[], int size)
{
  int temp;
  temp = arr[0];
  
  for (int i = 0; i < size-1; i++)
    arr[i] = arr[i+1];

  arr[size-1] = temp;
}

void leftRotate(int arr[], int d, int size)
{
  for (int i = 0; i < repeat; i++)
    leftRotatebyOne(arr, size);
}

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
    
  printf("\n");
}

int main()
{
  int arr[] = { 2,4,6,8,10,12 };
  
  leftRotate(arr, 3, 6);
  printArray(arr, 6);

  return 0;
}