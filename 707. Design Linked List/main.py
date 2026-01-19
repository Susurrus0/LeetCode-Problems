# LeetCode 707. Design Linked List
# https://leetcode.com/problems/design-linked-list

class MyLinkedList:
    def __init__(self):
        self.head = self
        self.nodes: list[MyLinkedList] = [self]
        self.val: int = None
        self.next: MyLinkedList = None


    def get(self, index: int) -> int:
        node: MyLinkedList = self.head
        for i in range(index+1):
            if node is None:
                return -1
            node = node.next
        return node.val


    def addAtHead(self, val: int) -> None:
        newNode: MyLinkedList = MyLinkedList()
        newNode.val = val
        newNode.next = self.head
        self.head = newNode


    def addAtTail(self, val: int) -> None:
        newNode: MyLinkedList = MyLinkedList()
        newNode.val = val
        node: MyLinkedList = self.head
        while node.next is not None:
            node = node.next
        node.next = newNode


    def addAtIndex(self, index: int, val: int) -> None:
        node: MyLinkedList = self.head
        newNode: MyLinkedList = MyLinkedList()
        newNode.val = val

        for i in range(index):
            node = node.next
        
        node.next = newNode
        newNode.next = node.next.next


    def deleteAtIndex(self, index: int) -> None:
        node: MyLinkedList = self.head
        for i in range(index):
            if node is None:
                return
            node = node.next
        
        node.next = node.next.next


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