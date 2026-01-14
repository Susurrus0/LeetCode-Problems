/*****************************************************
LeetCode 941. Valid Mountain Array
https://leetcode.com/problems/valid-mountain-array
*****************************************************/

#include <stdio.h>
#include <stdbool.h>

bool validMountainArray(int* arr, int arrSize);

int main() {
    int arr_1[] = { 2,1 };
    int arrLen_1 = sizeof(arr_1) / sizeof(arr_1[0]);
    bool expected_1 = false;

    int arr_2[] = { 3,5,5 };
    int arrLen_2 = sizeof(arr_2) / sizeof(arr_2[0]);
    bool expected_2 = false;

    int arr_3[] = { 0,3,2,1 };
    int arrLen_3 = sizeof(arr_3) / sizeof(arr_3[0]);
    bool expected_3 = true;

    printf("Test Case #1\n");
    printf("Expected output:\n");
    printf("    %s\n", expected_1 ? "true" : "false");
    printf("Actual output:\n");
    printf("    %s\n", validMountainArray(arr_1, arrLen_1) ? "true" : "false");

    printf("\n");

    printf("Test Case #2\n");
    printf("Expected output:\n");
    printf("    %s\n", expected_2 ? "true" : "false");
    printf("Actual output:\n");
    printf("    %s\n", validMountainArray(arr_2, arrLen_2) ? "true" : "false");

    printf("\n");

    printf("Test Case #3\n");
    printf("Expected output:\n");
    printf("    %s\n", expected_3 ? "true" : "false");
    printf("Actual output:\n");
    printf("    %s\n", validMountainArray(arr_3, arrLen_3) ? "true" : "false");
    
    return 0;
}

bool validMountainArray(int* arr, int arrSize) {
    if (arrSize < 3)
        return false;

    bool mountain = false;

    if (arr[1] > arr[0] && arr[arrSize-1] < arr[arrSize-2]) {
        int i = 1;
        while (i + 1 < arrSize && arr[i+1] > arr[i])
            i++;
        // printf("** i = %d\n", i);
        while (i + 1 < arrSize && arr[i+1] < arr[i])
            i++;
        // printf("** i = %d\n", i);
        if (i == arrSize - 1)
            mountain = true;
    } else {
        mountain = false;
    }
    return mountain;
}