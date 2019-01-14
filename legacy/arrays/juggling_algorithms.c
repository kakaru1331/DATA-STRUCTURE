#include <stdio.h>

int gcd(int a, int b)
{
  if (b == 0)
    return a;
  else
    return gcd(b, a%b);
}

void leftRotate(int arr[], int d, int size)
{
  int j, k, temp;

  for (int i = 0; i < gcd(d, size); i++)
  {
    temp = arr[i];
    j = i;

    while(1)
    {
      k = j + d;
      
      if (k >= size)
        k -= size;
      
      if (k == i)
        break;

      arr[j] = arr[k];
      j = k;
    }

    arr[j] = temp;
  }
}

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
  
  printf("\n");
}

int main()
{
  int arr[] = { 1,2,3,4,5,6,7,8 };
  
  leftRotate(arr, 3, 8);
  printArray(arr, 8);

  return 0;
}