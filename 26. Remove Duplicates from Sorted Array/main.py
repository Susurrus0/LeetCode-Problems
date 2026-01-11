# LeetCode 26. Remove Duplicates from Sorted Array
# https://leetcode.com/problems/remove-duplicates-from-sorted-array

class Solution:
    def removeDuplicates(self, nums: list[int]) -> int:
        if not nums:
            return 0
        i = 0
        for j in range(1, len(nums)):
            if nums[j] != nums[i]:
                i += 1
                nums[i] = nums[j]
        return i + 1

def main():
    nums_1: list[int] = [1,1,2]
    nums_2: list[int] = [0,0,1,1,1,2,2,3,3,4]

    expected_1: str = "2, nums = [1,2,_]"
    expected_2: str = "5, nums = [0,1,2,3,4,_,_,_,_,_]"
    
    solution: Solution = Solution()

    print("Test Case #1")
    print("Expected output:")
    print(f"    {expected_1}")
    print("Actual output:")
    print(f"    {solution.removeDuplicates(nums_1)}, nums = {nums_1}")
    print("")
    print("Test Case #2")
    print("Expected output:")
    print(f"    {expected_2}")
    print("Actual output:")
    print(f"    {solution.removeDuplicates(nums_2)}, nums = {nums_2}")

if __name__ == '__main__':
    main()