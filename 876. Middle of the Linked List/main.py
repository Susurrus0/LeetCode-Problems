# LeetCode 876. Middle of the Linked List
# https://leetcode.com/problems/middle-of-the-linked-list

from typing import Optional

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        results: list[int] = []
        node = head
        while node is not None:
            results.append(node.val)
            node = node.next
        length = len(results)
        index = length // 2
        finalResults = results[index:]
        
        finalNode = ListNode()
        currentNode = finalNode
        i: int = 0
        while i < len(finalResults) - 1:
            currentNode.val = finalResults[i]
            i += 1
            currentNode.next = ListNode()
            currentNode = currentNode.next
        currentNode.val = finalResults[i]
        return finalNode


def main():
    head_1: ListNode = ListNode(1, ListNode(2, ListNode(3, ListNode(4, ListNode(5)))))
    head_2: ListNode = ListNode(1, ListNode(2, ListNode(3, ListNode(4, ListNode(5, ListNode(6))))))

    expected_1: list[int] = [3,4,5]
    expected_2: list[int] = [4,5,6]

    solution: Solution = Solution()

    print("** Test case 1 **")
    print(f"head_1 = {head_1}")
    print(f"Expected ouput:\n    {expected_1}")
    print(f"Actual output:\n    {solution.middleNode(head_1)}")
    print()
    print("** Test case 2 **")
    print(f"head_2 = {head_2}")
    print(f"Expected ouput:\n    {expected_2}")
    print(f"Actual output:\n    {solution.middleNode(head_2)}")


if __name__ == '__main__':
    main()