# - Write a Python program that appends the squares of numbers from 1 to 5 to a list and prints the
#  final list

# Create an empty list to store the squares
squared_list = []

# Iterate through numbers from 1 to 5
for number in range(1, 6):
    # Calculate the square of each number and append it to the list
    squared_list.append(number ** 2)

# Print the final list of squares
print(f"The list of squares from 1 to 5: {squared_list}")
