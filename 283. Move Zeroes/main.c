/*****************************************************
LeetCode 283. Move Zeroes
https://leetcode.com/problems/move-zeroes
*****************************************************/

#include <stdio.h>

void moveZeroes(int* nums, int numsSize);
void printArray(int* array, int size);
int shiftArray(int* array, int size, int index);

int main() {
    int nums_1[] = { 0,1,0,3,12 };
    int numsSize_1 = sizeof(nums_1) / sizeof(nums_1[0]);
    int nums_2[] = { 0 };
    int numsSize_2 = sizeof(nums_2) / sizeof(nums_2[0]);

    char expected_1[] = "[1,3,12,0,0]";
    char expected_2[] = "[0]";

    printf("Test Case #1\n");
    printf("Expected output:\n");
    printf("    %s\n", expected_1);
    printf("Actual output:\n");
    moveZeroes(nums_1, numsSize_1);
    printf("    ");
    printArray(nums_1, numsSize_1);

    printf("\n");

    printf("Test Case #2\n");
    printf("Expected output:\n");
    printf("    %s\n", expected_2);
    printf("Expected output:\n");
    moveZeroes(nums_2, numsSize_2);
    printf("    ");
    printArray(nums_2, numsSize_2);
    printf("\n");

    return 0;
}

void moveZeroes(int* nums, int numsSize) {
    // TODO-1 Adjust moveZeroes() to use the two-pointer approach
    int i = 0;
    int zeroCount = 0;
    while (i < numsSize - zeroCount) {
        if (nums[i] == 0) {
            int temp = shiftArray(nums, numsSize, i);
            nums[numsSize - zeroCount - 1] = 0;
            zeroCount++;
        } else {
            i++;
        }
    }
    return;
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

int shiftArray(int* array, int size, int index) {
    int cache = 0;

    if (array == NULL || index >= size || index < 0)
        return 0;

    cache = array[index];
    for (int i = index; i < size - 1; i++) {
        array[i] = array[i+1];
    }
    return cache;
}