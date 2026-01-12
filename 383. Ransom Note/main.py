# LeetCode 383. Ransom Note
# https://leetcode.com/problems/ransom-note

class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        ransomNote = ransomNote.replace(" ", "")
        if len(ransomNote) > len(magazine):
            return False
        index: int = 0
        usedIndexes: list[int] = []
        noteLength: int = len(ransomNote)
        activeString: str = magazine
        for i in range(0, noteLength):
            letter = ransomNote[i]
            index = activeString.find(letter)
            if index < 0 or index in usedIndexes:
                return False
            usedIndexes.append(index)
            activeString = activeString[:index] + " " + activeString[index + 1:]
        return True


def main():
    ransomNote_1 = "a"
    magazine_1 = "b"
    ransomNote_2 = "aa"
    magazine_2 = "ab"
    ransomNote_3 = "aa"
    magazine_3 = "aab"

    expected_1: bool = False
    expected_2: bool = False
    expected_3: bool = True

    solution: Solution = Solution()

    print("** Test case 1 **")
    print(f"ransomNote_1 = {ransomNote_1}")
    print(f"magazine_1 = {magazine_1}")
    print(f"Expected ouput:\n    {expected_1}")
    print(f"Actual output:\n    {solution.canConstruct(ransomNote_1, magazine_1)}")
    print()
    print("** Test case 2 **")
    print(f"ransomNote_2 = {ransomNote_2}")
    print(f"magazine_2 = {magazine_2}")
    print(f"Expected ouput:\n    {expected_2}")
    print(f"Actual output:\n    {solution.canConstruct(ransomNote_2, magazine_2)}")
    print()
    print("** Test case 3 **")
    print(f"ransomNote_3 = {ransomNote_3}")
    print(f"magazine_3 = {magazine_3}")
    print(f"Expected ouput:\n    {expected_3}")
    print(f"Actual output:\n    {solution.canConstruct(ransomNote_3, magazine_3)}")


if __name__ == '__main__':
    main()