# LeetCode 1672. Richest Customer Wealth
# https://leetcode.com/problems/richest-customer-wealth

class Solution:
    def maximumWealth(self, accounts: list[list[int]]) -> int:
        maxWealth: int = 0
        for customer in accounts:
            customerWealth = 0
            for bank in customer:
                customerWealth += bank
            if customerWealth > maxWealth:
                maxWealth = customerWealth
        return maxWealth


def main():
    accounts_1: list[list[int]] = [[1,2,3],[3,2,1]]
    accounts_2: list[list[int]] = [[1,5],[7,3],[3,5]]
    accounts_3: list[list[int]] = [[2,8,7],[7,1,3],[1,9,5]]

    expected_1: int = 6
    expected_2: int = 10
    expected_3: int = 17

    solution: Solution = Solution()

    print("** Test case 1 **")
    print(f"accounts_1 = {accounts_1}")
    print(f"Expected ouput = {expected_1}")
    print(f"Actual output = {solution.maximumWealth(accounts_1)}")
    print()
    print("** Test case 2 **")
    print(f"accounts_2 = {accounts_2}")
    print(f"Expected ouput = {expected_2}")
    print(f"Actual output = {solution.maximumWealth(accounts_2)}")
    print()
    print("** Test case 3 **")
    print(f"accounts_3 = {accounts_3}")
    print(f"Expected ouput = {expected_3}")
    print(f"Actual output = {solution.maximumWealth(accounts_3)}")


if __name__ == '__main__':
    main()