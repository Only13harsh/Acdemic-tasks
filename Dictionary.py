# All dictionary functions
dict_functions = [
    'clear', 'copy', 'fromkeys', 'get', 'items', 'keys', 'pop', 
    'popitem', 'setdefault', 'update', 'values'
]

# Create a dictionary
d = {'a': 1, 'b': 2, 'c': 3}

# Execute all dictionary functions
for func in dict_functions:
    exec(f"d.{func}()")
