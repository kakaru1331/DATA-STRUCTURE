#include <stdio.h>

int Bsearch(int arr[], int len, int target)
{
  int first = 0;
  int last = len-1;
  int mid;
  int opCount = 0;
  
  while(first <= last)
  {
    mid = (first+last) / 2;

    if (target == arr[mid])
    {
      return mid;
    }
    else
    {
      if (target < arr[mid])
        last = mid - 1;     
      else
        first = mid + 1;      
    }
    opCount += 1;
  }
  printf("operate count: %d\n", opCount);
  return -1;
}

int main()
{
  int arr1[500] = { 0, };
  int arr2[5000] = { 0, };
  int arr3[50000] = { 0, };
  int index;

  index = Bsearch(arr1, sizeof(arr1)/sizeof(int), 1);
  if (index == -1)
    printf("Failed...\n");
     
  
}