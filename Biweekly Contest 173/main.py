# LeetCode Biweekly Contest 173
# TODO-1 Q1: Reverse String Prefix
# Reverse the first k characters of s and return the resulting string. ©leetcode
#
# TODO-2 Q2: Minimum Subarray Length With Distinct Sum At Least K
# Return the minimum length of a subarray whose sum of the distinct values present in that
# subarray (each value counted once) is at least k. If no such subarray exists, return -1. ©leetcode

class Solution:
    def reversePrefix(self, s: str, k: int) -> str:
        """Q1 function"""
        reversedStr: str = ""
        toReverse: str = s[:k]
        noReversing: str = s[k:]

        for i in range(0, k):
            reversedStr += toReverse[k-1-i]

        reversedStr += noReversing

        return reversedStr
    
    def minLength(self, nums: List[int], k: int) -> int:
        pass

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

    # print("Test Case #1")
    # print(f"Input: s = {s_1}, k = {k_1}")
    # print(f"Expected output: {expected_1}")
    # print(f"Actual output  : {solution.reversePrefix(s_1, k_1)}")

    # print("Test Case #2")
    # print(f"Input: s = {s_2}, k = {k_2}")
    # print(f"Expected output: {expected_2}")
    # print(f"Actual output  : {solution.reversePrefix(s_2, k_2)}")

    # print("Test Case #3")
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

if __name__ == '__main__':
    main()