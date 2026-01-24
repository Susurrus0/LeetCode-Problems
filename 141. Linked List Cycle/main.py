# LeetCode 141. Linked List Cycle
# https://leetcode.com/problems/linked-list-cycle

from typing import Optional

# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        pass

def main():
    # Test cases
    head_1: list[int] = [3,2,0,-4]
    pos_1: int = 1
    expected_1: bool = True

    head_2: list[int] = [1,2]
    pos_2: int = 0
    expected_2: bool = True

    head_3: list[int] = [1]
    pos_3: int = -1
    expected_3: bool = False

    solution: Solution = Solution()

    print("--- Test case 1 ---")
    print(f"head_1 = {head_1}, pos_1 = {pos_1}")
    print(f"Expected ouput:\n\t{expected_1}")
    print(f"Actual output:\n\t{solution.hasCycle(head_1)}")
    print()
    print("--- Test case 2 ---")
    print(f"head_2 = {head_2}, pos_2 = {pos_2}")
    print(f"Expected ouput:\n\t{expected_2}")
    print(f"Actual output:\n\t{solution.hasCycle(head_2)}")
    print()
    print("--- Test case 3 ---")
    print(f"head_3 = {head_3}, pos_3 = {pos_3}")
    print(f"Expected ouput:\n\t{expected_3}")
    print(f"Actual output:\n\t{solution.hasCycle(head_2)}")

    pass

if __name__ == '__main__':
    main()