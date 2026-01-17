# LeetCode Biweekly Contest 173
# TODO-1 Q1. Best Reachable Tower

# TODO-2 Q2. Minimum Operations to Reach Target Array

class Solution:
    def bestTower(self, towers: list[list[int]], center: list[int], radius: int) -> list[int]:
        """Q1 function"""
        # PASSED
        def manhattanDistance(center: list[int], tower: list[int]):
            # The Manhattan Distance between two cells (xi, yi) and (xj, yj) is |xi - xj| + |yi - yj|
            return abs(center[0] - tower[0]) + abs(center[1] - tower[1])

        goodTowers: list[list[int]] = []

        for tower in towers:
            distFromCenter: int = manhattanDistance(center, tower)
            if distFromCenter <= radius:
                goodTowers.append(tower)

        if len(goodTowers) < 1:
            return [-1, -1]

        bestTower: list[int] = [-1, -1, -1]

        for goodTower in goodTowers:
            if goodTower[2] > bestTower[2]:
                bestTower = goodTower
            elif goodTower[2] == bestTower[2] and goodTower[:2] < bestTower[:2]:
                bestTower = goodTower

        return bestTower[:2]
    

    def minOperations(self, nums: list[int], target: list[int]) -> int:
        pass


def main():
    # Q1 Test Cases
    towers_1a: list[list[int]] = [[1,2,5], [2,1,7], [3,1,9]]
    center_1a: list[int] = [1,1]
    radius_1a: int = 2
    expected_1a: list[int] = [3,1]

    towers_2a: list[list[int]] = [[1,3,4], [2,2,4], [4,4,7]]
    center_2a: list[int] = [0,0]
    radius_2a: int = 5
    expected_2a: list[int] = [1,3]

    towers_3a: list[list[int]] = [[5,6,8], [0,3,5]]
    center_3a: list[int] = [1,2]
    radius_3a: int = 1
    expected_3a: list[int] = [-1,-1]

    solution: Solution = Solution()

    print("********** Q1 **********")

    print("--- Test case 1 ---")
    print(f"towers_1a = {towers_1a}")
    print(f"center_1a = {center_1a}")
    print(f"Expected ouput:\n\t{expected_1a}")
    print(f"Actual output:\n\t{solution.bestTower(towers_1a, center_1a, radius_1a)}")

    print()

    print("--- Test case 2 ---")
    print(f"towers_2a = {towers_2a}")
    print(f"center_2a = {center_2a}")
    print(f"Expected ouput:\n\t{expected_2a}")
    print(f"Actual output:\n\t{solution.bestTower(towers_2a, center_2a, radius_2a)}")

    print()

    print("--- Test case 3 ---")
    print(f"towers_3a = {towers_3a}")
    print(f"center_3a = {center_3a}")
    print(f"Expected ouput:\n\t{expected_3a}")
    print(f"Actual output:\n\t{solution.bestTower(towers_3a, center_3a, radius_3a)}")

    # Q2 Test Cases
    nums_1b: list[int] = [1,2,3]
    target_1b: list[int] = [2,1,3]
    expected_1b: int = 2

    nums_2b: list[int] = [4,1,4]
    target_2b: list[int] = [5,1,4]
    expected_2b: int = 1

    nums_3b: list[int] = [7,3,7]
    target_3b: list[int] = [5,5,9]
    expected_3b: int = 2

    print("********** Q2 **********")

    print("--- Test case 1 ---")
    print(f"nums_1b = {nums_1b}")
    print(f"Expected ouput:\n\t{expected_1b}")
    print(f"Actual output:\n\t{solution.minOperations(nums_1b, target_1b)}")

    print()

    print("--- Test case 2 ---")
    print(f"nums_2b = {nums_2b}")
    print(f"Expected ouput:\n\t{expected_2b}")
    print(f"Actual output:\n\t{solution.minOperations(nums_2b, target_2b)}")

    print()

    print("--- Test case 3 ---")
    print(f"nums_3b = {nums_3b}")
    print(f"Expected ouput:\n\t{expected_3b}")
    print(f"Actual output:\n\t{solution.minOperations(nums_3b, target_3b)}")



if __name__ == '__main__':
    main()