# LeetCode Biweekly Contest 173
# TODO-1 Q1: Reverse String Prefix
# Reverse the first k characters of s and return the resulting string. ©leetcode
#
# TODO-2 Q2: Minimum Subarray Length With Distinct Sum At Least K
# Return the minimum length of a subarray whose sum of the distinct values present in that
# subarray (each value counted once) is at least k. If no such subarray exists, return -1. ©leetcode

class Solution:
    def reversePrefix(self, s: str, k: int) -> str:
        """Q1 Function"""
        reversedStr: str = ""
        toReverse: str = s[:k]
        noReversing: str = s[k:]

        for i in range(0, k):
            reversedStr += toReverse[k-1-i]

        reversedStr += noReversing

        return reversedStr
    
    def minLength(self, nums: list[int], k: int) -> int:
        """Q2 Function"""
        minLen: int = 0
        sumSoFar: int = 0

        # print(f"nums = {nums}")
        # print(f"k = {k}")

        while sumSoFar < k and len(nums) > 0:
            sumSoFar += nums.pop(nums.index(max(nums)))
            minLen += 1
            # print(f"sumSoFar = {sumSoFar}")
            # print(f"minLen = {minLen}")
        
        if sumSoFar < k:
            minLen = -1

        # print(f"final minLen = {minLen}")

        return minLen

def main():
    solution = Solution()

    # Q1 Test cases
    # s_1: str = "abcd"
    # k_1: int = 2
    # expected_1: str = "bacd"
    
    # s_2: str = "xyz"
    # k_2: int = 3
    # expected_2: str = "zyx"

    # s_3: str = "hey"
    # k_3: int = 1
    # expected_3: str = "hey"

    # print("Q1 Test Case #1")
    # print(f"Input: s = {s_1}, k = {k_1}")
    # print(f"Expected output: {expected_1}")
    # print(f"Actual output  : {solution.reversePrefix(s_1, k_1)}")

    # print("Q1 Test Case #2")
    # print(f"Input: s = {s_2}, k = {k_2}")
    # print(f"Expected output: {expected_2}")
    # print(f"Actual output  : {solution.reversePrefix(s_2, k_2)}")

    # print("Q1 Test Case #3")
    # print(f"Input: s = {s_3}, k = {k_3}")
    # print(f"Expected output: {expected_3}")
    # print(f"Actual output  : {solution.reversePrefix(s_3, k_3)}")

    # Q2 Test cases
    nums_1: list[int] = [2,2,3,1]
    k_1: int = 4
    expected_1: int = 2

    nums_2: list[int] = [3,2,3,4]
    k_2: int = 5
    expected_2: int = 2

    nums_3: list[int] = [5,5,4]
    k_3: int = 5
    expected_3: int = 1

    nums_4: list[int] = [1, 2, 1, 1]
    k_4: int = 6
    expected_4: int = -1

    nums_5: list[int] = [5,7,3,12]
    k_5: int = 18
    expected_5: int = 3

    print("Q2 Test Case #1")
    print(f"Input: nums = {nums_1}, k = {k_1}")
    print(f"Expected output: {expected_1}")
    print(f"Actual output  : {solution.minLength(nums_1, k_1)}")

    print("Q2 Test Case #2")
    print(f"Input: nums = {nums_2}, k = {k_2}")
    print(f"Expected output: {expected_2}")
    print(f"Actual output  : {solution.minLength(nums_2, k_2)}")

    print("Q2 Test Case #3")
    print(f"Input: nums = {nums_3}, k = {k_3}")
    print(f"Expected output: {expected_3}")
    print(f"Actual output  : {solution.minLength(nums_3, k_3)}")

    print("Q2 Test Case #4")
    print(f"Input: nums = {nums_4}, k = {k_4}")
    print(f"Expected output: {expected_4}")
    print(f"Actual output  : {solution.minLength(nums_4, k_4)}")

    print("Q2 Test Case #5")
    print(f"Input: nums = {nums_5}, k = {k_5}")
    print(f"Expected output: {expected_5}")
    print(f"Actual output  : {solution.minLength(nums_5, k_5)}")


if __name__ == '__main__':
    main()