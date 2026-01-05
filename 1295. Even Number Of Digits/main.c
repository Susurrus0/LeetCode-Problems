/*****************************************************
LeetCode 1295. Find Numbers with Even Number of Digits
https://leetcode.com/problems/find-numbers-with-even-number-of-digits
*****************************************************/

#include <stdio.h>

int findNumbers(int* nums, int numsSize);

int main() {
    int nums1[] = {12,345,2,6,7896};
    int len1 = sizeof(nums1) / sizeof(nums1[0]);
    char expected1 = '2';

    int nums2[] = {555,901,482,1771};
    int len2 = sizeof(nums2) / sizeof(nums2[0]);
    char expected2 = '1';

    printf("Expected result = %c\n", expected1);
    printf("Result = %d\n", findNumbers(nums1, len1));

    printf("Expected result = %c\n", expected2);
    printf("Result = %d\n", findNumbers(nums2, len2));

    return 0;
}

int findNumbers(int* nums, int numsSize) {
    int evenDigitNums = 0;

    for (int i = 0; i < numsSize; i++) {
        int number = nums[i];
        // printf("nums[%d] = %d\n", i, nums[i]);
        int digits = 0;
        while (number > 0) {
            digits++;
            number /= 10;
            // printf("number = %d\n", number);
        }
        // printf("digit count of nums[%d] = %d\n", i, digits);
        if (digits % 2 == 0) {
            evenDigitNums++;
            // printf("digit count of nums[%d] %% 2 == 0\n", i);
            // printf("evenDigitNums++\n");
        }
    }
    return evenDigitNums;
}