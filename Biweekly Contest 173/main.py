# LeetCode Biweekly Contest 173
# TODO-1 Q1: Reverse String Prefix
# Reverse the first k characters of s and return the resulting string. ©leetcode

class Solution:
    def reversePrefix(self, s: str, k: int) -> str:
        reversedStr: str = ""
        toReverse: str = s[:k]
        noReversing: str = s[k:]
        # print(f"toReverse   = {toReverse}")
        # print(f"noReversing = {noReversing}")

        for i in range(0, k):
            reversedStr += toReverse[k-1-i]

        reversedStr += noReversing

        return reversedStr

def main():
    # Test cases
    s_1: str = "abcd"
    k_1: int = 2
    expected_1: str = "bacd"
    
    s_2: str = "xyz"
    k_2: int = 3
    expected_2: str = "zyx"

    s_3: str = "hey"
    k_3: int = 1
    expected_3: str = "hey"

    solution = Solution()

    print("Test Case #1")
    print(f"Input: s = {s_1}, k = {k_1}")
    print(f"Expected output: {expected_1}")
    print(f"Actual output  : {solution.reversePrefix(s_1, k_1)}")

    print("Test Case #2")
    print(f"Input: s = {s_2}, k = {k_2}")
    print(f"Expected output: {expected_2}")
    print(f"Actual output  : {solution.reversePrefix(s_2, k_2)}")

    print("Test Case #3")
    print(f"Input: s = {s_3}, k = {k_3}")
    print(f"Expected output: {expected_3}")
    print(f"Actual output  : {solution.reversePrefix(s_3, k_3)}")

if __name__ == '__main__':
    main()