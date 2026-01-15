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

    int nums_4[] = { 1,1,2 };
    int numsLen_4 = sizeof(nums_4) / sizeof(nums_4[0]);
    int expected_4 = 2;

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

    printf("\n");

    printf("--- Test Case #4 ---\n");
    printf("Expected output:\n");
    printf("\t%i\n", expected_4);
    printf("Actual output:\n");
    printf("\t%i\n", thirdMax(nums_4, numsLen_4));

    return 0;
}

int thirdMax(int* nums, int numsSize) {
    int max1 = nums[0];
    int max2 = 0, max3 = 0;

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] > max1)
            max1 = nums[i];
    }

    if (numsSize < 3)
        return max1;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != max1 && nums[i] > max2)
            max2 = nums[i];
    }

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != max1 && nums[i] != max2 && nums[i] > max3)
            max3 = nums[i];
    }

    return max3;
}