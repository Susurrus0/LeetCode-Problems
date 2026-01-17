# LeetCode 448. Find All Numbers Disappeared in an Array
# https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array

class Solution:
    def findDisappearedNumbers(self, nums: list[int]) -> list[int]:
        n: int = len(nums)
        disapperedNums = set()

        for i in range(1, n+1):
            if i not in nums:
                disapperedNums.add(i)
        
        return list(disapperedNums)


def main():
    # Test cases
    nums_1: list[int] = [4,3,2,7,8,2,3,1]
    expected_1: list[int] = [5,6]

    nums_2: list[int] = [1,1]
    expected_2: list[int] = [2]

    solution: Solution = Solution()

    print("--- Test case 1 ---")
    print(f"nums_1 = {nums_1}")
    print(f"Expected ouput:\n\t{expected_1}")
    print(f"Actual output:\n\t{solution.findDisappearedNumbers(nums_1)}")

    print()

    print("--- Test case 2 ---")
    print(f"nums_2 = {nums_2}")
    print(f"Expected ouput:\n\t{expected_2}")
    print(f"Actual output:\n\t{solution.findDisappearedNumbers(nums_2)}")


if __name__ == '__main__':
    main()