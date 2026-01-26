# LeetCode 1200. Minimum Absolute Difference
# https://leetcode.com/problems/minimum-absolute-difference

class Solution:
    def minimumAbsDifference(self, arr: list[int]) -> list[list[int]]:
        pass


def main():
    # Test cases
    arr_1: list[int] = [4,2,1,3]
    expected_1: list[list[int]] = [[1,2],[2,3],[3,4]]

    arr_2: list[int] = [1,3,6,10,15]
    expected_2: list[list[int]] = [[1,3]]

    arr_3: list[int] = [3,8,-10,23,19,-4,-14,27]
    expected_3: list[list[int]] = [[-14,-10],[19,23],[23,27]]

    solution: Solution = Solution()

    print("--- Test case 1 ---")
    print(f"arr_1 = {arr_1}")
    print(f"Expected ouput:\n\t{expected_1}")
    print(f"Actual output:\n\t{solution.minimumAbsDifference(arr_1)}")
    print()
    print("--- Test case 2 ---")
    print(f"arr_2 = {arr_2}")
    print(f"Expected ouput:\n\t{expected_2}")
    print(f"Actual output:\n\t{solution.minimumAbsDifference(arr_2)}")
    print()
    print("--- Test case 3 ---")
    print(f"arr_3 = {arr_3}")
    print(f"Expected ouput:\n\t{expected_3}")
    print(f"Actual output:\n\t{solution.minimumAbsDifference(arr_2)}")
    

if __name__ == '__main__':
    main()