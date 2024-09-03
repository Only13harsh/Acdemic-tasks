s = input("")
if len(s) >= 3:
    if s.endswith('ing'):
        s += 'ly'
    else:
        s += 'ing'
print(s)
