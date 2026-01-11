/*****************************************************
LeetCode 283. Move Zeroes
https://leetcode.com/problems/move-zeroes
*****************************************************/

#include <stdio.h>

void moveZeroes(int* nums, int numsSize);
void printArray(int* array, int size);

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
    printf("    ...\n");

    printf("\n");

    printf("Test Case #2\n");
    printf("Expected output:\n");
    printf("    %s\n", expected_2);
    printf("Expected output:\n");
    printf("    ...\n");

    return 0;
}

void moveZeroes(int* nums, int numsSize) {
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