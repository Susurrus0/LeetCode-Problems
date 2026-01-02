# LeetCode 27. Remove Element
# https://leetcode.com/problems/remove-element

class Solution:
    def removeElement(self, nums: list[int], val: int) -> int:
        while val in nums:
            nums.remove(val)
        return len(nums)

def main():
    # Test cases
    nums_1: list[int] = [3,2,2,3]
    val_1: int = 3
    expected_1: str = "2, nums = [2,2,_,_]"

    nums_2: list[int] = [0,1,2,2,3,0,4,2]
    val_2: int = 2
    expected_2: str = "5, nums = [0,1,4,0,3,_,_,_]"

    solution = Solution()

    print("Test Case #1")
    print(f"nums_1 = {nums_1}, val_1 = {val_1}")
    print(f"expected output = {expected_1}")
    result_1: int = solution.removeElement(nums_1, val_1)
    print(f"actual output = {result_1}, nums = {nums_1}")
    print("")
    print("Test Case #2")
    print(f"nums_2 = {nums_2}, val_2 = {val_2}")
    print(f"expected output = {expected_2}")
    result_2: int = solution.removeElement(nums_2, val_2)
    print(f"actual output = {result_2}, nums = {nums_2}")

if __name__ == '__main__':
    main()