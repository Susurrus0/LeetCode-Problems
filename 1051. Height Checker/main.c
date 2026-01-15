/*****************************************************
LeetCode 1051. Height Checker
https://leetcode.com/problems/height-checker
*****************************************************/

#include <stdio.h>

int heightChecker(int* heights, int heightsSize);

int main() {
    // Test cases
    int heights_1[] = { 1,1,4,2,1,3 };
    int heightsLen_1 = sizeof(heights_1) / sizeof(heights_1[0]);
    int expected_1 = 3;

    int heights_2[] = { 5,1,2,3,4 };
    int heightsLen_2 = sizeof(heights_2) / sizeof(heights_2[0]);
    int expected_2 = 5;

    int heights_3[] = { 1,2,3,4,5 };
    int heightsLen_3 = sizeof(heights_3) / sizeof(heights_3[0]);
    int expected_3 = 0;

    printf("--- Test Case #1 ---\n");
    printf("Expected output:\n");
    printf("\t%s\n", expected_1);
    printf("Actual output:\n");
    printf("\t%d\n", heightChecker(heights_1, heightsLen_1));

    printf("\n");

    printf("--- Test Case #2 ---\n");
    printf("Expected output:\n");
    printf("\t%s\n", expected_2);
    printf("Actual output:\n");
    printf("\t%d\n", heightChecker(heights_2, heightsLen_2));
    
    printf("\n");

    printf("--- Test Case #3 ---\n");
    printf("Expected output:\n");
    printf("\t%s\n", expected_3);
    printf("Actual output:\n");
    printf("\t%d\n", heightChecker(heights_3, heightsLen_3));

    return 0;
}

int heightChecker(int* heights, int heightsSize) {
    return 0;
}