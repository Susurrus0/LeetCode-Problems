/*****************************************************
LeetCode 414. Third Maximum Number
https://leetcode.com/problems/third-maximum-number
*****************************************************/

#include <stdio.h>

int thirdMax(int* nums, int numsSize);

int main() {
    // Test cases
    int nums_1[] = { 3,2,1 };
    int numsLen_1 = sizeof(nums_1) / sizeof(nums_1[0]);
    int expected_1 = 1;

    int nums_2[] = { 1,2 };
    int numsLen_2 = sizeof(nums_2) / sizeof(nums_2[0]);
    int expected_2 = 2;

    int nums_3[] = { 2,2,3,1 };
    int numsLen_3 = sizeof(nums_3) / sizeof(nums_3[0]);
    int expected_3 = 1;

    printf("--- Test Case #1 ---\n");
    printf("Expected output:\n");
    printf("\t%i\n", expected_1);
    printf("Actual output:\n");
    printf("\t%i\n", thirdMax(nums_1, numsLen_1));

    printf("\n");

    printf("--- Test Case #2 ---\n");
    printf("Expected output:\n");
    printf("\t%i\n", expected_2);
    printf("Actual output:\n");
    printf("\t%i\n", thirdMax(nums_2, numsLen_2));
    
    printf("\n");

    printf("--- Test Case #3 ---\n");
    printf("Expected output:\n");
    printf("\t%i\n", expected_3);
    printf("Actual output:\n");
    printf("\t%i\n", thirdMax(nums_3, numsLen_3));

    return 0;
}

int thirdMax(int* nums, int numsSize) {
    return 0;
}