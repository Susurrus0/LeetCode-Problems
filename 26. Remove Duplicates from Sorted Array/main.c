/*****************************************************
LeetCode 26. Remove Duplicates from Sorted Array
https://leetcode.com/problems/remove-duplicates-from-sorted-array
*****************************************************/

#include <stdio.h>

int removeDuplicates(int* nums, int numsSize);
void printArray(int* array, int size);

int main() {
    int nums_1[] = { 1,1,2 };
    int numsSize_1 = sizeof(nums_1) / sizeof(nums_1[0]);
    int nums_2[] = { 0,0,1,1,1,2,2,3,3,4 };
    int numsSize_2 = sizeof(nums_2) / sizeof(nums_2[0]);

    char expected_1[] = "2, nums = [1,2,_]";
    char expected_2[] = "5, nums = [0,1,2,3,4,_,_,_,_,_]";

    printf("Test Case #1\n");
    printf("Expected output:\n");
    printf("    %s\n", expected_1);
    printf("Actual output:\n");
    printf("    %d, nums = ", removeDuplicates(nums_1, numsSize_1));
    printArray(nums_1, numsSize_1);

    printf("\n");

    printf("Test Case #2\n");
    printf("Expected output:\n");
    printf("    %s\n", expected_2);
    printf("Actual output:\n");
    printf("    %d, nums = ", removeDuplicates(nums_2, numsSize_2));
    printArray(nums_2, numsSize_2);
    printf("\n");

    return 0;
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

int removeDuplicates(int* nums, int numsSize) {
    if (numsSize < 1)
        return 0;

    int uniques = 1;
    int lastUnique = nums[0];
    int i = 1;
    int j = 1; // index of last unique num
    for (; i < numsSize; i++) {
        if (nums[i] != lastUnique) {
            nums[j] = nums[i];
            j++;
            uniques++;
            lastUnique = nums[i];
        }
    }
    for (; j < numsSize; j++) {
        nums[j] = 0;
    }
    return uniques;
}