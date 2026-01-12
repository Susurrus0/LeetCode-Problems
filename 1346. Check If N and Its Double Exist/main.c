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

    return 0;
}

bool checkIfExist(int* arr, int arrSize) {
    int i = 0, j = 0;

    for (; i < arrSize; i++) {
        for (; j < arrSize; j++) {
            if (arr[j] * 2 == arr[i])
                return true;
        }
    }

    return false;
}