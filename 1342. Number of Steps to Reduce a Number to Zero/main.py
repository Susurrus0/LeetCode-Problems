# LeetCode 1342. Number of Steps to Reduce a Number to Zero
# https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero

class Solution:
    def numberOfSteps(self, num: int) -> int:
        steps: int = 0
        while num > 0:
            if num % 2 == 0:
                num /= 2
                steps += 1
            else:
                num -= 1
                steps += 1
        return steps


def main():
    num_1: int = 14
    num_2: int = 8
    num_3: int = 123

    expected_1: int = 6
    expected_2: int = 4
    expected_3: int = 12

    solution: Solution = Solution()

    print("** Test case 1 **")
    print(f"num_1 = {num_1}")
    print(f"Expected ouput:\n    {expected_1}")
    print(f"Actual output:\n    {solution.numberOfSteps(num_1)}")
    print()
    print("** Test case 2 **")
    print(f"num_2 = {num_2}")
    print(f"Expected ouput:\n    {expected_2}")
    print(f"Actual output:\n    {solution.numberOfSteps(num_2)}")
    print()
    print("** Test case 3 **")
    print(f"num_3 = {num_3}")
    print(f"Expected ouput:\n    {expected_3}")
    print(f"Actual output:\n    {solution.numberOfSteps(num_3)}")


if __name__ == '__main__':
    main()