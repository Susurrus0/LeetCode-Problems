/*****************************************************
LeetCode 1089. Duplicate Zeros
https://leetcode.com/problems/duplicate-zeros
*****************************************************/

#include <stdio.h>

void duplicateZeros(int* arr, int arrSize);

int main() {
    // Test cases
    int arr1[] = { 1,0,2,3,0,4,5,0 };
    int len1 = sizeof(arr1) / sizeof(arr1[0]);
    int expected1[] = { 1,0,0,2,3,0,0,4 };

    int arr2[] = { 1,2,3 };
    int len2 = sizeof(arr2) / sizeof(arr2[0]);
    int expected2[] = { 1,2,3 };

    printf("Test case #1\n");
    printf("Expected output: ");
    for (int i = 0; i < len1; i++) {
        printf("%d,", expected1[i]);
    }
    printf("\n");
    duplicateZeros(arr1, len1);
    printf("Actual output: ");
    for (int i = 0; i < len1; i++) {
        printf("%d,", arr1[i]);
    }
    printf("\n");

    printf("Test case #2\n");
    printf("Expected output: ");
    for (int i = 0; i < len2; i++) {
        printf("%d,", expected2[i]);
    }
    printf("\n");
    duplicateZeros(arr2, len2);
    printf("Actual output: ");
    for (int i = 0; i < len2; i++) {
        printf("%d,", arr2[i]);
    }
    printf("\n");

    return 0;
}

void duplicateZeros(int* arr, int arrSize) {
    int len = arrSize -1;
    printf("len = %d\n", len);
    for (int i = len; i >= 0; i--) {
        printf("* i = %d\n", i);
        if (arr[i] == 0 && i != len) {
            // Shift array by 1 to the right, starting from the zero
            for (int j = len - 1; j > i; j--) {
                printf("** j = %d\n", j);
                arr[j+1] = arr[j];
            }
            arr[i+1] = 0;
        }
    }
}