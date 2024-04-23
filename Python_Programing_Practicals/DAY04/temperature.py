# - Create a Python script to convert temperature from Fahrenheit to Celsius using a constant
#  conversion factor.

# Define the conversion factor
FAHRENHEIT_TO_CELSIUS = 5/9

def fahrenheit_to_celsius(fahrenheit):
  """Converts a temperature in Fahrenheit to Celsius.

  Args:
      fahrenheit: The temperature in Fahrenheit.

  Returns:
      The temperature in Celsius.
  """

  celsius = (fahrenheit - 32) * FAHRENHEIT_TO_CELSIUS
  return celsius

# Get user input for Fahrenheit temperature
fahrenheit_temp = float(input("Enter temperature in Fahrenheit: "))

# Convert temperature and print the result
celsius_temp = fahrenheit_to_celsius(fahrenheit_temp)
print(f"{fahrenheit_temp} degrees Fahrenheit is equal to {celsius_temp:.2f} degrees Celsius")
