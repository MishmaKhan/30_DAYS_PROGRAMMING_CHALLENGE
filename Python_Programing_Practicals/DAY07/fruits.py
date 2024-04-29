# - Write a Python program that creates a list of 5 fruits provided by the user and prints each fruit in a
#  for loop.

# Create an empty list to store the fruits
fruits = []

# Prompt the user to input 5 fruits
for i in range(5):
    fruit = input(f"Enter fruit {i + 1}: ")
    fruits.append(fruit)

# Print each fruit
print("You entered the following fruits:")
for fruit in fruits:
    print(f"- {fruit}")
