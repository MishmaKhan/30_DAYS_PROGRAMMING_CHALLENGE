# - Create a list of numbers and write a Python script that prints out all even numbers from the list.

# Create a list of numbers
numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

# Iterate through the list and print even numbers
for num in numbers:
    if num % 2 == 0:
        print(f"Even number: {num}")
