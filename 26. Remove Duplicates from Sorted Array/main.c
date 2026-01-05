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
    
    return 0;
}

int removeDuplicates(int* nums, int numsSize) {
    return 0;
}