# - Write a Python program that guesses a number between 1 and 10
import random

def main():
    # Initialize counters for high, low, and correct guesses
    high = 0
    low = 0
    win = 0

    # Generate a random number between 1 and 100
    number = random.randint(1, 100)

    while win == 0:
        # Ask the user for their guess
        userNum = int(input("Please guess a number between 1 and 100: "))

        # Check if the guess is too high, too low, or correct
        if userNum > number:
            message = "Too high, try again."
            high += 1
        elif userNum == number:
            message = "You got it correct! Congratulations!"
            win += 1
        else:
            message = "Too low, try again."
            low += 1

        print()
        print(message)

    # Display total statistics
    print()
    print("Number of times too high:", high)
    print("Number of times too low:", low)
    print("Total number of guesses:", high + low + win)

if __name__ == "__main__":
    main()
