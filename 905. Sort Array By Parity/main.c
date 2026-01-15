/*****************************************************
LeetCode 905. Sort Array By Parity
https://leetcode.com/problems/sort-array-by-parity
*****************************************************/

#include <stdio.h>
#include <stdlib.h>

int *sortArrayByParity(int *nums, int numsSize, int *returnSize);
void printArray(int *array, int size);

int main() {
    int nums_1[] = { 3,1,2,4 };
    int numsLen_1 = sizeof(nums_1) / sizeof(nums_1[0]);
    char expected_1[] = "[2,4,3,1]";

    int nums_2[] = { 0 };
    int numsLen_2 = sizeof(nums_2) / sizeof(nums_2[0]);
    char expected_2[] = "[0]";

    printf("Test Case #1\n");
    printf("Expected output:\n");
    printf("\t%s\n", expected_1);
    printf("Actual output:\n");
    printf("\t");
    printArray(sortArrayByParity(nums_1, numsLen_1, &numsLen_1), numsLen_1);

    printf("\n\n");

    printf("Test Case #2\n");
    printf("Expected output:\n");
    printf("\t%s\n", expected_2);
    printf("Actual output:\n");
    printf("\t");
    printArray(sortArrayByParity(nums_2, numsLen_2, &numsLen_2), numsLen_2);

    printf("\n");

    return 0;
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *sortArrayByParity(int *nums, int numsSize, int *returnSize) {
    int *result = (int*) malloc(numsSize * sizeof(int));

    int evenIndex = 0;
    int oddIndex = numsSize - 1;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] % 2 == 0) {
            result[evenIndex] = nums[i];
            evenIndex++;
        }
        else {
            result[oddIndex] = nums[i];
            oddIndex--;
        }
    }
    *returnSize = numsSize;
    return result;
}

void printArray(int* array, int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", array[i]);
        if (i + 1 < size) {
            printf(",");
        }
    }
    printf("]");
}