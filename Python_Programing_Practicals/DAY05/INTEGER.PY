# - Write a Python script that asks for an integer and prints whether it's a positive, negative, or zero.

integer = int(input("Enter an integer: "))

if integer > 0:
    print(f"The provided number: {integer} is positive")
elif integer < 0:
    print(f"The provided number: {integer} is negative")
else:
    print(f"The provided number: {integer} is zero")