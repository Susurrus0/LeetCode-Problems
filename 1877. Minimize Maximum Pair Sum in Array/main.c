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
    int maxPair;
    // TODO 1. Sort nums either in either non-decreasing or non-increasing order
    bubbleSort(nums, numsSize);
    // TODO 2. Put the first and last nums into pairs
    

    // TODO 3. Return the largest minimized pair
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