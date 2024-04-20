# Creating two sets
set1 = {1, 2, 3, 4, 5}
set2 = {4, 5, 6, 7, 8}

# Printing the sets
print("Set 1:", set1)
print("Set 2:", set2)

# Union of two sets
union_set = set1.union(set2)
print("Union of Set 1 and Set 2:", union_set)

# Intersection of two sets
intersection_set = set1.intersection(set2)
print("Intersection of Set 1 and Set 2:", intersection_set)

# Difference between two sets
difference_set = set1.difference(set2)
print("Set 1 - Set 2:", difference_set)

# Symmetric difference between two sets
symmetric_difference_set = set1.symmetric_difference(set2)
print("Symmetric Difference of Set 1 and Set 2:", symmetric_difference_set)
