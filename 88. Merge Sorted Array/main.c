/*****************************************************
LeetCode 88. Merge Sorted Array
https://leetcode.com/problems/merge-sorted-array
*****************************************************/

#include <stdio.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n);

int main() {
    // Test cases
    int nums1_1[] = { 1,2,3,0,0,0 };
    int nums1Size_1 = sizeof(nums1_1) / sizeof(nums1_1[0]);
    int m_1 = 3;
    int nums2_1[] = { 2,5,6 };
    int nums2Size_1 = sizeof(nums2_1) / sizeof(nums2_1[0]);
    int n_1 = 3;
    char expected_1[] = "[1,2,2,3,5,6]";

    int nums1_2[] = { 1 };
    int nums1Size_2 = sizeof(nums1_2) / sizeof(nums1_2[0]);
    int m_2 = 1;
    int nums2_2[] = {  };
    int nums2Size_2 = sizeof(nums2_2) / sizeof(nums2_2[0]);
    int n_2 = 0;
    char expected_2[] = "[1]";
    
    int nums1_3[] = { 0 };
    int nums1Size_3 = sizeof(nums1_3) / sizeof(nums1_3[0]);
    int m_3 = 0;
    int nums2_3[] = { 1 };
    int nums2Size_3 = sizeof(nums2_3) / sizeof(nums2_3[0]);
    int n_3 = 1;
    char expected_3[] = "[1]";

    int nums1_4[] = { 4,5,6,0,0,0 };
    int nums1Size_4 = sizeof(nums1_4) / sizeof(nums1_4[0]);
    int m_4 = 3;
    int nums2_4[] = { 1,2,3 };
    int nums2Size_4 = sizeof(nums2_4) / sizeof(nums2_4[0]);
    int n_4 = 3;
    char expected_4[] = "[1,2,3,4,5,6]";

    // Run the tests
    // Test case #1
    printf("Test case #1\n");
    printf("Expected output = %s", expected_1);
    printf("\n");
    merge(nums1_1, nums1Size_1, m_1, nums2_1, nums2Size_1, n_1);
    printf("Actual result   = [");
    for (int i = 0; i < nums1Size_1; i++) {
        printf("%d", nums1_1[i]);
        if (i + 1 < nums1Size_1) {
            printf(",");
        }
    }
    printf("]\n\n");

    // Test case #2
    printf("Test case #2\n");
    printf("Expected output = %s", expected_2);
    printf("\n");
    merge(nums1_2, nums1Size_2, m_2, nums2_2, nums2Size_2, n_2);
    printf("Actual result   = [");
    for (int i = 0; i < nums1Size_2; i++) {
        printf("%d", nums1_2[i]);
        if (i + 1 < nums1Size_2) {
            printf(",");
        }
    }
    printf("]\n\n");

    // Test case #3
    printf("Test case #3\n");
    printf("Expected output = %s", expected_3);
    printf("\n");
    merge(nums1_3, nums1Size_3, m_3, nums2_3, nums2Size_3, n_3);
    printf("Actual result   = [");
    for (int i = 0; i < nums1Size_3; i++) {
        printf("%d", nums1_1[i]);
        if (i + 1 < nums1Size_3) {
            printf(",");
        }
    }
    printf("]\n\n");

    // Test case #4
    printf("Test case #4\n");
    printf("Expected output = %s", expected_4);
    printf("\n");
    merge(nums1_4, nums1Size_4, m_4, nums2_4, nums2Size_4, n_4);
    printf("Actual result   = [");
    for (int i = 0; i < nums1Size_4; i++) {
        printf("%d", nums1_4[i]);
        if (i + 1 < nums1Size_4) {
            printf(",");
        }
    }
    printf("]\n\n");
    
    return 0;
}

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int len = m + n;
    // Print nums1 and nums2
    // for (int i = 0; i < m; i++) {
    //     printf("nums1[%d] = %d", i, nums1[i]);
    //     printf("\n");
    // }
    // for (int i = 0; i < n; i++) {
    //     printf("nums2[%d] = %d", i, nums2[i]);
    //     printf("\n");
    // }
    // printf("\n--------------\n\n");

    // Add nums2 elements to nums1
    for (int index1 = m, index2 = 0; index1 < len; index1++, index2++) {
        nums1[index1] = nums2[index2];
    }
    // Bubble sort combined nums1
    for (int i = 0; i < len; i++) {
        int temp = 0;
        for (int j = 0; j < len - i; j++) {
            if (j + 1 < len && nums1[j] > nums1[j+1]) {
                temp = nums1[j+1];
                nums1[j+1] = nums1[j];
                nums1[j] = temp;
            }
        }
    }
}