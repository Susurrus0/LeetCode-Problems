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

    int nums_3[] = {41900,69441,94407,37498,20299,10856,36221,2231,54526,79072,84309,76765,92282,13401,44698,17586,98455,47895,98889,65298,32271,23801,83153,12186,7453,79460,67209,54576,87785,47738,40750,31265,77990,93502,50364,75098,11712,80013,24193,35209,56300,85735,3590,24858,6780,50086,87549,7413,90444,12284,44970,39274,81201,43353,75808,14508,17389,10313,90055,43102,18659,20802,70315,48843,12273,78876,36638,17051,20478};
    int k_3 = 5;
    int numsLen_3 = sizeof(nums_3) / sizeof(nums_3[0]);
    int expected_3 = 1428;

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

    printf("\n");

    printf("--- Test Case #3 ---\n");
    printf("Expected output:\n");
    printf("\t%i\n", expected_3);
    printf("Actual output:\n");
    printf("\t%i\n", minimumDifference(nums_3, numsLen_3, k_3));

    return 0;
}

int minimumDifference(int* nums, int numsSize, int k) {
    qsort(nums, numsSize, sizeof(int), comp);

    int minDiff = -1;

    for (int i = 0; i + k - 1 < numsSize; i++) {
        int j = i + k - 1;
        int diff = nums[j] - nums[i];
        if (diff < minDiff || minDiff < 0)
            minDiff = diff;
    }
    return minDiff;
}

int comp(const void* a, const void* b) {
  	
  	// If a is smaller, positive value will be returned
    return (*(int*)a - *(int*)b);
}
