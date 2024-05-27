# All set functions
set_functions = [
    'add', 'clear', 'copy', 'difference', 'difference_update', 
    'discard', 'intersection', 'intersection_update', 'isdisjoint', 
    'issubset', 'issuperset', 'pop', 'remove', 'symmetric_difference', 
    'symmetric_difference_update', 'union', 'update'
]

# create a set
s = set([1, 2, 3])

# Execute all set functions
for func in set_functions:
    exec(f"s.{func}()")
