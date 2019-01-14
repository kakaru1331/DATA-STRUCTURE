#include <stdio.h>

int binarySearch(int numbers[], int lengthOfArray, int targetNumber) {
    int beginIdx = 0;
    int endIdx = lengthOfArray - 1;
    int mid;

    while(beginIdx <= endIdx) {
        mid = (beginIdx + endIdx) / 2;

        if (targetNumber == numbers[mid]) {
            return mid;
        } else {
            if (targetNumber < numbers[mid])
                endIdx = mid-1;
            else
                beginIdx = mid+1;
        }
    }

    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int targetIdx;

    int targetNumber = 7;
    targetIdx = binarySearch(arr, sizeof(arr)/sizeof(int), targetNumber);
    if (targetIdx == -1)
        printf("Thers's no that number %d\n", targetNumber);
    else
        printf("Return Index is %d\n", targetIdx);

    return 0;
}