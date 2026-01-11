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
    nums_1[numsSize_1-1] = shiftArray(nums_1, numsSize_1, 1);
    printf("    ");
    printArray(nums_1, numsSize_1);

    printf("\n");

    printf("Test Case #2\n");
    printf("Expected output:\n");
    printf("    %s\n", expected_2);
    printf("Expected output:\n");
    printf("    ...\n");

    return 0;
}

void moveZeroes(int* nums, int numsSize) {
    int i = 0; // index of last non-zero array element
    int zero = numsSize - 1;
    for (int j = 0; j < numsSize; j++) {
        if (nums[j] == 0) {
            // move zero to the end and shift array to the left
        } else {
            i = j;
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