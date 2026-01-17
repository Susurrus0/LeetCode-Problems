# LeetCode Biweekly Contest 173
# TODO-1 Q1: Best Reachable Tower

class Solution:
    def bestTower(self, towers: list[list[int]], center: list[int], radius: int) -> list[int]:
        """Q1 function"""
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

        bestTower: list[int] = [0, 0, 0]

        for goodTower in goodTowers:
            if goodTower[2] > bestTower[2]:
                bestTower = goodTower

        return bestTower[:2]


def main():
    # Q1 Test Cases
    towers_1: list[list[int]] = [[1,2,5], [2,1,7], [3,1,9]]
    center_1: list[int] = [1,1]
    radius_1: int = 2
    expected_1: list[int] = [3,1]

    towers_2: list[list[int]] = [[1,3,4], [2,2,4], [4,4,7]]
    center_2: list[int] = [0,0]
    radius_2: int = 5
    expected_2: list[int] = [1,3]

    towers_3: list[list[int]] = [[5,6,8], [0,3,5]]
    center_3: list[int] = [1,2]
    radius_3: int = 1
    expected_3: list[int] = [-1,-1]

    solution: Solution = Solution()

    print("--- Test case 1 ---")
    print(f"towers_1 = {towers_1}")
    print(f"center_1 = {center_1}")
    print(f"Expected ouput:\n\t{expected_1}")
    print(f"Actual output:\n\t{solution.bestTower(towers_1, center_1, radius_1)}")

    print()

    print("--- Test case 2 ---")
    print(f"towers_2 = {towers_2}")
    print(f"center_2 = {center_2}")
    print(f"Expected ouput:\n\t{expected_2}")
    print(f"Actual output:\n\t{solution.bestTower(towers_2, center_2, radius_2)}")

    print()

    print("--- Test case 3 ---")
    print(f"towers_3 = {towers_3}")
    print(f"center_3 = {center_3}")
    print(f"Expected ouput:\n\t{expected_3}")
    print(f"Actual output:\n\t{solution.bestTower(towers_3, center_3, radius_3)}")


if __name__ == '__main__':
    main()