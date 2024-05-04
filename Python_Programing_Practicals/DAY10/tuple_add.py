# Write a Python script to add an item to a tuple (Note: You might
#  need to recreate the tuple since they are immutable)

original_tuple = (1, 2, 3)
new_element = 4
appended_tuple = original_tuple + (new_element,)
print(appended_tuple)  # Output: (1, 2, 3, 4)
