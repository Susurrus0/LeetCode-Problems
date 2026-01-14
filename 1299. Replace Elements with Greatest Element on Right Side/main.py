# LeetCode 1299. Replace Elements with Greatest Element on Right Side
# https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side

class Solution:
    def replaceElements(self, arr: list[int]) -> list[int]:
        n = len(arr)
        maxRight = -1

        # Go from right to left for better efficiency
        for i in range(n - 1, -1, -1):
            current = arr[i]
            arr[i] = maxRight
            maxRight = max(maxRight, current)
        
        return arr


def main():
    # Test cases
    arr_1: list[int] = [17,18,5,4,6,1]
    expected_1: list[int] = [18,6,6,6,1,-1]

    arr_2: list[int] = [400]
    expected_2: list[int] = [-1]

    # Execution
    solution: Solution = Solution()

    print("-- Test case #1 --")
    print(f"arr_1 = {arr_1}")
    print(f"Expected ouput:\n    {expected_1}")
    print(f"Actual output:\n    {solution.replaceElements(arr_1)}")

    print()

    print("-- Test case #2 --")
    print(f"arr_2 = {arr_2}")
    print(f"Expected ouput:\n    {expected_2}")
    print(f"Actual output:\n    {solution.replaceElements(arr_2)}")
    

if __name__ == '__main__':
    main()