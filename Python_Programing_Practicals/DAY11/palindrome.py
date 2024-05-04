# - Write a Python function that checks if a given word is a palindrome.

def is_palindrome(s):
    s = s.lower().replace(' ', '')
    return s == s[::-1]

# Example usage:
word = "racecar"
print(is_palindrome(word))  # Output: True
