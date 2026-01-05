/*****************************************************
LeetCode 26. Remove Duplicates from Sorted Array
https://leetcode.com/problems/remove-duplicates-from-sorted-array
*****************************************************/

#include <stdio.h>

int removeDuplicates(int* nums, int numsSize);

int main() {
    // Test cases
    int nums_1[] = { 1,1,2 };
    int numsSize_1 = sizeof(nums_1) / sizeof(nums_1[0]);
    char expected_1[] = "2, nums = [1,2,_]";

    int nums_2[] = { 0,0,1,1,1,2,2,3,3,4 };
    int numsSize_2 = sizeof(nums_2) / sizeof(nums_2[0]);
    char expected_2[] = "5, nums = [0,1,2,3,4,_,_,_,_,_]";
    
    printf("Test Case #1\n");
    printf("Expected output = %s\n", expected_1);
    int result_1 = removeDuplicates(nums_1, numsSize_1);
    printf("Actual output   = %d\n", result_1);
    printf("\n");
    printf("Test Case #2\n");
    printf("Expected output = %s\n", expected_2);
    int result_2 = removeDuplicates(nums_2, numsSize_2);
    printf("Actual output   = %d\n", result_2);

    return 0;
}

int removeDuplicates(int* nums, int numsSize) {
    int usedNums[numsSize];
    int usedNumsIndex = 0;

    for (int i = 0; i < numsSize; i++) {
        usedNumsIndex = 0;
    }

    return 0;
}