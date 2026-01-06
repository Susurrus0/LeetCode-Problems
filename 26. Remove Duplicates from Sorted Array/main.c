/*****************************************************
LeetCode 26. Remove Duplicates from Sorted Array
https://leetcode.com/problems/remove-duplicates-from-sorted-array
*****************************************************/

#include <stdio.h>

int removeDuplicates(int* nums, int numsSize);
void shiftArray(int* array, int arraySize, int startIndex);

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
    printf("Actual output   = %d, nums = [", result_1);
    for (int i = 0; i < numsSize_1; i++) {
        printf("%d", nums_1[i]);
        if (i + 1 < numsSize_1) {
            printf(",");
        }
    }
    printf("]\n");
    printf("\n");
    printf("Test Case #2\n");
    printf("Expected output = %s\n", expected_2);
    int result_2 = removeDuplicates(nums_2, numsSize_2);
    printf("Actual output   = %d, nums = [", result_2);
    for (int i = 0; i < numsSize_2; i++) {
        printf("%d", nums_2[i]);
        if (i + 1 < numsSize_2) {
            printf(",");
        }
    }
    printf("]\n");


    return 0;
}

int removeDuplicates(int* nums, int numsSize) {
    int usedNums[numsSize];
    int usedNumsIndex = 0;
    int uniqueNums = 0;

    for (int i = 0; i < numsSize; i++) {
        printf("** i = %d\n", i);
        printf("** nums[%d] = %d\n", i, nums[i]);
        // Bug here, j < usedNumsIndex + 1 is an infinite loop, since usedNumsIndex is incremented every time
        for (int j = 0; j < i + 1; j++) {
            printf("**\t j = %d\n", j);
            printf("**\t usedNums[%d] = %d\n", j, usedNums[j]);
            if (nums[i] == usedNums[j]) {
                printf("** Used number detected. Removing.\n");
                shiftArray(nums, numsSize, i + 1);
                i--;
                break;
            } else {
                printf("** Unique number detected. uniqueNums++\n");
                printf("** %d added to usedNums at index %d\n", nums[i], usedNumsIndex);
                uniqueNums++;
                usedNums[usedNumsIndex] = nums[i];
                usedNumsIndex++;
                printf("** usedNumsIndex is now %d\n", usedNumsIndex);
            }
        }
    }

    return uniqueNums;
}

void shiftArray(int* array, int arraySize, int startIndex) {
    for (int i = startIndex; i < arraySize; i++) {
        array[i - 1] = array[i];
    }
}