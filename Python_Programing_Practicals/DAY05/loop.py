# - Write a Python program that uses a loop to print out the first 10 square numbers (n^2).

# Loop through numbers 1 to 10 (inclusive)
for number in range(1, 11):
  # Calculate the square
  square = number * number
  # Print the number and its square
  print(f"{number}^2 = {square}")
