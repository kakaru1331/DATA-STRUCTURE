#include <stdio.h>

int linearSearch(int numbers[], int lengthOfArray, int targetNumber) {
    for (int i=0; i<lengthOfArray; i++) {
        if (numbers[i] == targetNumber)
            return i;
    }

    return -1;
}

int main() {
    int arr[] = {3, 5, 2, 4, 9};
    int targetIdx;

    int targetNumber = 4;
    targetIdx = linearSearch(arr, sizeof(arr)/sizeof(int), targetNumber);
    if (targetIdx == -1)
        printf("There's no that number %d\n", targetNumber);
    else
        printf("Return index is %d\n", targetIdx);


    return 0;
}