// LeetCode 1984. Minimum Difference Between Highest and Lowest of K Scores
// https://leetcode.com/problems/minimum-difference-between-highest-and-lowest-of-k-scores

#include <stdio.h>
#include <stdlib.h>

int minimumDifference(int* nums, int numsSize, int k);
int comp(const void* a, const void* b);

int main() {
    // Test cases
    int nums_1[] = {90};
    int k_1 = 1;
    int numsLen_1 = sizeof(nums_1) / sizeof(nums_1[0]);
    int expected_1 = 0;

    int nums_2[] = {9,4,1,7};
    int k_2 = 2;
    int numsLen_2 = sizeof(nums_2) / sizeof(nums_2[0]);
    int expected_2 = 2;

    printf("--- Test Case #1 ---\n");
    printf("Expected output:\n");
    printf("\t%i\n", expected_1);
    printf("Actual output:\n");
    printf("\t%i\n", minimumDifference(nums_1, numsLen_1, k_1));

    printf("\n");

    printf("--- Test Case #2 ---\n");
    printf("Expected output:\n");
    printf("\t%i\n", expected_2);
    printf("Actual output:\n");
    printf("\t%i\n", minimumDifference(nums_2, numsLen_2, k_2));

    return 0;
}

int minimumDifference(int* nums, int numsSize, int k) {
    // Option 1 - sort nums, then take k last elements
    // Option 2 - two-pointer approach, probably more efficient?
    int minDiff = 0;

    qsort(nums, numsSize, sizeof(int), comp);
    int num1 = nums[numsSize - 1];
    int num2 = nums[numsSize - k];
    minDiff = num1 - num2;

    return minDiff;
}

int comp(const void* a, const void* b) {
  	
  	// If a is smaller, positive value will be returned
    return (*(int*)a - *(int*)b);
}
