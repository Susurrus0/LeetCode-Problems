// LeetCode 1877. Minimize Maximum Pair Sum in Array
// https://leetcode.com/problems/minimize-maximum-pair-sum-in-array

#include <stdio.h>

int minPairSum(int* nums, int numsSize);

int main() {
    // Test cases
    int nums_1[] = {3,5,2,3};
    int numsLen_1 = sizeof(nums_1) / sizeof(nums_1[0]);
    int expected_1 = 7;

    int nums_2[] = {3,5,4,2,4,6};
    int numsLen_2 = sizeof(nums_2) / sizeof(nums_2[0]);
    int expected_2 = 8;

    printf("--- Test Case #1 ---\n");
    printf("Expected output:\n");
    printf("\t%i\n", expected_1);
    printf("Actual output:\n");
    printf("\t%i\n", minPairSum(nums_1, numsLen_1));

    printf("\n");

    printf("--- Test Case #2 ---\n");
    printf("Expected output:\n");
    printf("\t%i\n", expected_2);
    printf("Actual output:\n");
    printf("\t%i\n", minPairSum(nums_2, numsLen_2));
    
    return 0;
}

int minPairSum(int* nums, int numsSize) {
    return 0;
}