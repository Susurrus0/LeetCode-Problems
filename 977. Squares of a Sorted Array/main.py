# LeetCode 977. Squares of a Sorted Array
# https://leetcode.com/problems/squares-of-a-sorted-array

def main():
    # Test cases and expected output
    nums1: list[int] = [-4,-1,0,3,10]
    expected1: list[int] = [0,1,9,16,100]

    nums2: list[int] = [-7,-3,2,3,11]
    expected2: list[int] = [4,9,9,49,121]
    
    print("** Test case 1 **")
    print(f"nums1 = {nums1}")
    print(f"Expected ouput = {expected1}")

    print("** Test case 2 **")
    print(f"nums2 = {nums2}")
    print(f"Expected ouput = {expected2}")

    solution = Solution()
    print("** Results **")
    print(f"result1 = {solution.sortedSquares(nums1)}")
    print(f"result2 = {solution.sortedSquares(nums2)}")

    pass

class Solution:
    def sortedSquares(self, nums: list[int]) -> list[int]:
        squaredNums: list[int] = []
        for num in nums:
            squaredNums.append(pow(num, 2))
        squaredNums.sort()
        return squaredNums

if __name__ == '__main__':
    main()