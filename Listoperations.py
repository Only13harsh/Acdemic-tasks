numbers = [3, 6, 2, 7, 8, 5]
evenNO = []
oddNO = []
for i in numbers:
    if i % 2 == 0:
        evenNO.append(i)
    else:
        oddNO.append(i)
evenNO.sort(reverse=True)
oddNO.sort(reverse=True)
NEWlist = evenNO + oddNO
product = 1
for i in NEWlist:
    product *= i
print("Even numbers are:", evenNO)
print("Odd numbers are:", oddNO)
print("Result of merging the two lists:", NEWlist)
print("Resultant Product:", product)
