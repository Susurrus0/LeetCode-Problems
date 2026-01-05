/*****************************************************
LeetCode 485. Max Consecutive Ones
https://leetcode.com/problems/max-consecutive-ones
*****************************************************/

#include <stdio.h>

int findMaxConsecutiveOnes(int* nums, int numsSize);

int main() {
    int nums[] = {1,1,0,1,1,1};
    int length = sizeof(nums) / sizeof(nums[0]);

    printf("findMaxConsecutiveOnes = %d\n", findMaxConsecutiveOnes(nums, length));

    return 0;
}

int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int maxOnes = 0;
    int ones = 0;
    for (int i = 0; i < numsSize; i++) {
        // printf("i = %d\n", i);
        // printf("nums[i] = %d\n", nums[i]);
        if (nums[i] == 1) {
            ones++;
        } else {
            if (ones > maxOnes) {
                maxOnes = ones;
            }
            ones = 0;
        }
        if (ones > maxOnes) {
            maxOnes = ones;
        }
    }
    return maxOnes;
}