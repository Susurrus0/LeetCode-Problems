// LeetCode 1877. Minimize Maximum Pair Sum in Array
// https://leetcode.com/problems/minimize-maximum-pair-sum-in-array

#include <stdio.h>

int minPairSum(int* nums, int numsSize);
void bubbleSort(int* nums, int numsSize);

int main() {
    // Test cases
    int nums_1[] = {3,5,2,3};
    int numsLen_1 = sizeof(nums_1) / sizeof(nums_1[0]);
    int expected_1 = 7;

    int nums_2[] = {3,5,4,2,4,6};
    int numsLen_2 = sizeof(nums_2) / sizeof(nums_2[0]);
    int expected_2 = 8;

    int nums_3[] = {4,1,5,1,2,5,1,5,5,4};
                //  1,1,1,2,4,4,5,5,5,5
    int numsLen_3 = sizeof(nums_3) / sizeof(nums_3[0]);
    int expected_3 = 8;

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

    printf("\n");

    printf("--- Test Case #3 ---\n");
    printf("Expected output:\n");
    printf("\t%i\n", expected_3);
    printf("Actual output:\n");
    printf("\t%i\n", minPairSum(nums_3, numsLen_3));

    return 0;
}

int minPairSum(int* nums, int numsSize) {
    int maxPair = 0;

    bubbleSort(nums, numsSize);

    for (int i = 0; i < numsSize; i++) {
        int pair = nums[i] + nums[numsSize - 1 - i];
        if (pair > maxPair)
            maxPair = pair;
    }

    return maxPair;
}

void bubbleSort(int* nums, int numsSize) {
    for (int i = 0; i < numsSize; i++) {
        int temp = 0;
        for (int j = 0; j < numsSize - i; j++) {
            if (j + 1 < numsSize && nums[j] > nums[j+1]) {
                temp = nums[j+1];
                nums[j+1] = nums[j];
                nums[j] = temp;
            }
        }
    }
}