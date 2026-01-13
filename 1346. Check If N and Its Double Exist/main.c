/*****************************************************
LeetCode 1346. Check If N and Its Double Exist
https://leetcode.com/problems/check-if-n-and-its-double-exist
*****************************************************/

#include <stdio.h>
#include <stdbool.h>

bool checkIfExist(int* arr, int arrSize);

int main() {
    int arr_1[] = { 10,2,5,3 };
    int arrLen_1 = sizeof(arr_1) / sizeof(arr_1[0]);
    bool expected_1 = true;

    int arr_2[] = { 3,1,7,11 };
    int arrLen_2 = sizeof(arr_2) / sizeof(arr_2[0]);
    bool expected_2 = false;

    int arr_3[] = { 7,1,14,11 };
    int arrLen_3 = sizeof(arr_3) / sizeof(arr_3[0]);
    bool expected_3 = true;

    int arr_4[] = { 0,-2,2 };
    int arrLen_4 = sizeof(arr_4) / sizeof(arr_4[0]);
    bool expected_4 = false;

    printf("Test Case #1\n");
    printf("Expected output:\n");
    printf("    %s\n", expected_1 ? "true" : "false");
    printf("Actual output:\n");
    printf("    %s\n", checkIfExist(arr_1, arrLen_1) ? "true" : "false");

    printf("\n");

    printf("Test Case #2\n");
    printf("Expected output:\n");
    printf("    %s\n", expected_2 ? "true" : "false");
    printf("Actual output:\n");
    printf("    %s\n", checkIfExist(arr_2, arrLen_2) ? "true" : "false");

    printf("\n");

    printf("Test Case #3\n");
    printf("Expected output:\n");
    printf("    %s\n", expected_3 ? "true" : "false");
    printf("Actual output:\n");
    printf("    %s\n", checkIfExist(arr_3, arrLen_3) ? "true" : "false");

    printf("\n");

    printf("Test Case #4\n");
    printf("Expected output:\n");
    printf("    %s\n", expected_4 ? "true" : "false");
    printf("Actual output:\n");
    printf("    %s\n", checkIfExist(arr_4, arrLen_4) ? "true" : "false");

    return 0;
}

bool checkIfExist(int* arr, int arrSize) {
    for (int i = 0; i < arrSize; i++) {
        int j = 0;
        // printf("i = %d\n", i);
        // printf("arr[%d] = %d\n", i, arr[i]);
        for (; j < arrSize; j++) {
            // printf("\tj = %d\n", j);
            // printf("\tarr[%d] = %d\n", j, arr[j]);
            // printf("\t\t%d * 2 = %d\n", j, j * 2);
            if (arr[i] == 2 * arr[j] && i != j)
                return true;
        }
    }

    return false;
}