/*****************************************************
LeetCode 414. Third Maximum Number
https://leetcode.com/problems/third-maximum-number
*****************************************************/

#include <stdio.h>
#include <limits.h>

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

    int nums_5[] = { 1,2,-2147483648 };
    int numsLen_5 = sizeof(nums_5) / sizeof(nums_5[0]);
    int expected_5 = -2147483648;

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

    printf("\n");

    printf("--- Test Case #5 ---\n");
    printf("Expected output:\n");
    printf("\t%i\n", expected_5);
    printf("Actual output:\n");
    printf("\t%i\n", thirdMax(nums_5, numsLen_5));

    return 0;
}

int thirdMax(int* nums, int numsSize) {
    int max1 = nums[0];
    long max2 = LONG_MIN, max3 = LONG_MIN;

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] > max1) {
            max3 = max2;
            max2 = max1;
            max1 = nums[i];
        }
        else if (nums[i] > max2 && nums[i] < max1) {
            max3 = max2;
            max2 = nums[i];
        }
        else if (nums[i] > max3 && nums[i] < max2) {
            max3 = nums[i];
        }
    }

    if (max3 == LONG_MIN)
        return max1;

    return max3;
}