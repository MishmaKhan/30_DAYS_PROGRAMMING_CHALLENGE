#  Write a Python script to sort a list of tuples by the second
#  item in each tuple.

def sort_tuple_bubble(tup_list):
    n = len(tup_list)
    for i in range(n):
        for j in range(n - i - 1):
            if tup_list[j][1] > tup_list[j + 1][1]:
                tup_list[j], tup_list[j + 1] = tup_list[j + 1], tup_list[j]
    return tup_list

# Example usage:
my_tuples = [('for', 24), ('is', 10), ('Geeks', 28), ('Geeksforgeeks', 5), ('portal', 20), ('a', 15)]
sorted_tuples = sort_tuple_bubble(my_tuples)
print(sorted_tuples)
