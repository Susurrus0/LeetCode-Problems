# LeetCode 412. Fizz Buzz
# https://leetcode.com/problems/fizz-buzz

class Solution:
    def fizzBuzz(self, n: int) -> list[str]:
        results: list[str] = []
        for i in range(1, n+1):
            if i % 5 == 0 and i % 3 == 0:
                results.append("FizzBuzz")
            elif i % 5 == 0:
                results.append("Buzz")
            elif i % 3 == 0:
                results.append("Fizz")
            else:
                results.append(f"{i}")
        return results


def main():
    n_1: int = 3
    n_2: int = 5
    n_3: int = 15

    expected_1: list = ["1","2","Fizz"]
    expected_2: list = ["1","2","Fizz","4","Buzz"]
    expected_3: list = ["1","2","Fizz","4","Buzz","Fizz","7","8","Fizz","Buzz","11","Fizz","13","14","FizzBuzz"]

    solution: Solution = Solution()

    print("** Test case 1 **")
    print(f"n_1 = {n_1}")
    print(f"Expected ouput:\n    {expected_1}")
    print(f"Actual output:\n    {solution.fizzBuzz(n_1)}")
    print()
    print("** Test case 2 **")
    print(f"n_2 = {n_2}")
    print(f"Expected ouput:\n    {expected_2}")
    print(f"Actual output:\n    {solution.fizzBuzz(n_2)}")
    print()
    print("** Test case 3 **")
    print(f"n_3 = {n_3}")
    print(f"Expected ouput:\n    {expected_3}")
    print(f"Actual output:\n    {solution.fizzBuzz(n_3)}")


if __name__ == '__main__':
    main()