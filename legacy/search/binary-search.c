#include <stdio.h>

int Bsearch(int arr[], int len, int target)
{
  int first = 0;
  int last = len-1;
  int mid;

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
        last = mid-1;
      else
        first = mid+1;
    }
  }

  return -1;
}

int main()
{
  int arr[] = {1, 3 , 5 , 7, 9};
  int index;

  index = Bsearch(arr, sizeof(arr)/sizeof(int), 7);
  if (index == -1)
    printf("No match\n");
  else
    printf("Result: %d\n", index);
  
  return 0;
}