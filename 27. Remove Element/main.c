/*****************************************************
LeetCode 27. Remove Element
https://leetcode.com/problems/remove-element
*****************************************************/

#include <stdio.h>

int removeElement(int* nums, int numsSize, int val);
void printArray(int* array, int size);

int main() {
    int nums_1[] = { 3,2,2,3 };
    int val_1 = 3;
    int numsLen_1 = sizeof(nums_1) / sizeof(nums_1[0]);
    char expected_1[] = "2, nums = [2,2,_,_]";

    int nums_2[] = { 0,1,2,2,3,0,4,2 };
    int val_2 = 2;
    int numsLen_2 = sizeof(nums_2) / sizeof(nums_2[0]);
    char expected_2[] = "5, nums = [0,1,4,0,3,_,_,_]";
    
    printf("Test Case #1\n");
    printf("Expected output:\n");
    printf("\t%s\n", expected_1);
    printf("Actual output:\n");
    printf("\t%d, nums = ", removeElement(nums_1, numsLen_1, val_1));
    printArray(nums_1, numsLen_1);

    printf("\n\n");

    printf("Test Case #2\n");
    printf("Expected output:\n");
    printf("\t%s\n", expected_2);
    printf("Actual output:\n");
    printf("\t%d, nums = ", removeElement(nums_2, numsLen_2, val_2));
    printArray(nums_2, numsLen_2);

    printf("\n");

    return 0;
}

int removeElement(int* nums, int numsSize, int val) {
    return 0;
}

void printArray(int* array, int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", array[i]);
        if (i + 1 < size) {
            printf(",");
        }
    }
    printf("]");
}