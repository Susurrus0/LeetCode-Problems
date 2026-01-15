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

    int heights_4[] = { 7,3,5,5,1,2,2,3,9,2,2,7,1,7,3,2,3,6,6,7 };
    int heightsLen_4 = sizeof(heights_4) / sizeof(heights_4[0]);
    int expected_4 = 17;

    printf("--- Test Case #1 ---\n");
    printf("Expected output:\n");
    printf("\t%i\n", expected_1);
    printf("Actual output:\n");
    printf("\t%i\n", heightChecker(heights_1, heightsLen_1));

    printf("\n");

    printf("--- Test Case #2 ---\n");
    printf("Expected output:\n");
    printf("\t%i\n", expected_2);
    printf("Actual output:\n");
    printf("\t%i\n", heightChecker(heights_2, heightsLen_2));
    
    printf("\n");

    printf("--- Test Case #3 ---\n");
    printf("Expected output:\n");
    printf("\t%i\n", expected_3);
    printf("Actual output:\n");
    printf("\t%i\n", heightChecker(heights_3, heightsLen_3));

    printf("\n");

    printf("--- Test Case #4 ---\n");
    printf("Expected output:\n");
    printf("\t%i\n", expected_4);
    printf("Actual output:\n");
    printf("\t%i\n", heightChecker(heights_4, heightsLen_4));

    return 0;
}

int heightChecker(int* heights, int heightsSize) {
    int unexpectedCount = 0;
    int expectedHeights[heightsSize];

    for (int i = 0; i < heightsSize; i++) {
        expectedHeights[i] = heights[i];
    }

    for (int i = 0; i < heightsSize; i++) {
        for (int j = i; j < heightsSize; j++) {
            if (j + 1 < heightsSize && expectedHeights[j] > expectedHeights[j + 1]) {
                int temp = expectedHeights[j];
                expectedHeights[j] = expectedHeights[j + 1];
                expectedHeights[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < heightsSize; i++) {
        if (heights[i] != expectedHeights[i])
            unexpectedCount++;
    }

    return unexpectedCount;
}