#  Write a Python function that returns a tuple containing the
#  smallest and the largest numbers from a list given by the user.

def find_smallest_largest(numbers):
    if not numbers:
        return None  # Return None for an empty list

    smallest = min(numbers)
    largest = max(numbers)

    return smallest, largest

# Example usage:
user_numbers = [10, 5, 8, 3, 12, 7]
result = find_smallest_largest(user_numbers)
if result:
    smallest_num, largest_num = result
    print(f"The smallest number is {smallest_num} and the largest number is {largest_num}.")
else:
    print("The list is empty.")
