# LeetCode 707. Design Linked List
# https://leetcode.com/problems/design-linked-list

class MyLinkedList:
    class _LinkedNode:
        def __init__(self, val: int = None, next: MyLinkedList._LinkedNode = None):
            self.val: int = val
            self.next: MyLinkedList._LinkedNode = next


    def __init__(self):
        self.head = None
        self.size: int = 0


    def get(self, index: int) -> int:
        if index >= self.size or index < 0:
            return -1
        else:
            node: MyLinkedList._LinkedNode = self.head
            for i in range(index):
                node = node.next
            return node.val


    def addAtHead(self, val: int) -> None:
        newNode: MyLinkedList._LinkedNode = self._LinkedNode(val)
        newNode.next = self.head
        self.head = newNode
        self.size += 1


    def addAtTail(self, val: int) -> None:
        if self.size < 1:
            self.addAtHead(val)
        else:
            newNode: MyLinkedList._LinkedNode = self._LinkedNode(val)
            tail: MyLinkedList._LinkedNode = self.head
            while tail.next is not None:
                tail = tail.next
            tail.next = newNode
            self.size += 1


    def addAtIndex(self, index: int, val: int) -> None:
        if index > self.size or index < 0:
            return
        elif index == 0:
            self.addAtHead(val)
        elif index == self.size:
            self.addAtTail(val)
        else:
            prev: MyLinkedList._LinkedNode = self.head
            next: MyLinkedList._LinkedNode = self.head.next
            newNode: MyLinkedList._LinkedNode = self._LinkedNode(val)

            for i in range(index - 1):
                prev = prev.next
                next = next.next
                        
            newNode.next = next
            prev.next = newNode

            self.size += 1


    def deleteAtIndex(self, index: int) -> None:
        node: MyLinkedList._LinkedNode = self.head
        for i in range(index - 1):
            if node is None:
                return
            node = node.next
        
        node.next = node.next.next
        self.size -= 1


# Your MyLinkedList object will be instantiated and called as such:
# obj = MyLinkedList()
# param_1 = obj.get(index)
# obj.addAtHead(val)
# obj.addAtTail(val)
# obj.addAtIndex(index,val)
# obj.deleteAtIndex(index)


def main():
    # Your code goes here
    
    pass


if __name__ == '__main__':
    main()