# LeetCode 977. Squares of a Sorted Array
# https://leetcode.com/problems/squares-of-a-sorted-array

def main():
    # Test cases and expected output
    nums_1: list[int] = [-4,-1,0,3,10]
    expected1: list[int] = [0,1,9,16,100]

    nums_2: list[int] = [-7,-3,2,3,11]
    expected2: list[int] = [4,9,9,49,121]
    
    solution: Solution = Solution()

    print("--- Test case 1 ---")
    print(f"nums_1 = {nums_1}")
    print(f"Expected ouput:\n\t{expected1}")
    print(f"Actual output:\n\t{solution.sortedSquares(nums_1)}")
    print()
    print("--- Test case 2 ---")
    print(f"nums_2 = {nums_2}")
    print(f"Expected ouput:\n\t{expected2}")
    print(f"Actual output:\n\t{solution.sortedSquares(nums_2)}")


class Solution:
    def sortedSquares(self, nums: list[int]) -> list[int]:
        # Initial solution
        # squaredNums: list[int] = []
        # for num in nums:
        #     squaredNums.append(pow(num, 2))
        # squaredNums.sort()
        # return squaredNums
        # Improved solution
        return sorted([i*i for i in nums])


if __name__ == '__main__':
    main()