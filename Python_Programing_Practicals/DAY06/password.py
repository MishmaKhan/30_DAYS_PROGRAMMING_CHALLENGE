import re

def password_check(password):
    """
    Verify the strength of 'password'
    Returns a dictionary indicating the wrong criteria.
    A password is considered strong if:
    - 8 characters length or more
    - Contains at least 1 digit
    - Contains at least 1 symbol
    - Contains at least 1 uppercase letter
    - Contains at least 1 lowercase letter
    """

    # Check length
    length_error = len(password) < 8

    # Check for digits
    digit_error = re.search(r"\d", password) is None

    # Check for uppercase letters
    uppercase_error = re.search(r"[A-Z]", password) is None

    # Check for lowercase letters
    lowercase_error = re.search(r"[a-z]", password) is None

    # Check for symbols
    symbol_error = re.search(r"[ !#$%&'()*+,-./[\\\]^_`{|}~\"]", password) is None

    # Overall result
    password_ok = not (length_error or digit_error or uppercase_error or lowercase_error or symbol_error)

    return {
        'password_ok': password_ok,
        'length_error': length_error,
        'digit_error': digit_error,
        'uppercase_error': uppercase_error,
        'lowercase_error': lowercase_error,
        'symbol_error': symbol_error
    }

def main():
    user_password = input("Enter a password: ")
    result = password_check(user_password)

    if result['password_ok']:
        print("The password is strong.")
    else:
        print("The password does not meet the criteria. Please check the following:")
        if result['length_error']:
            print("- Password must be at least 8 characters long.")
        if result['digit_error']:
            print("- Password must contain at least 1 digit.")
        if result['uppercase_error']:
            print("- Password must contain at least 1 uppercase letter.")
        if result['lowercase_error']:
            print("- Password must contain at least 1 lowercase letter.")
        if result['symbol_error']:
            print("- Password must contain at least 1 special character.")

if __name__ == "__main__":
    main()
