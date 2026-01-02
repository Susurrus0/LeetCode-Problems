# LeetCode 27. Remove Element
# https://leetcode.com/problems/remove-element

class Solution:
    def removeElement(self, nums: list[int], val: int) -> int:
        pass

def main():
    # Test cases
    nums_1: list[int] = [3,2,2,3]
    val_1: int = 3
    expected_1: str = "2, nums = [2,2,_,_]"

    nums_2: list[int] = [0,1,2,2,3,0,4,2]
    val_2: int = 2
    expected_2: str = "5, nums = [0,1,4,0,3,_,_,_]"

if __name__ == '__main__':
    main()