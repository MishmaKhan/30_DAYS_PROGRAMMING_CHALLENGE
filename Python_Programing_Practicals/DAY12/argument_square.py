# Write a Python function that takes a number as an
#  argument and returns its square.

import math

def square_using_math_pow(number):
    return math.pow(number, 2)

# Example usage:
num = 5
result = square_using_math_pow(num)
print(f"The square of {num} is {result}")
# Output: The square of 5 is 25.0
