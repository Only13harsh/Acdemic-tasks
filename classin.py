
data = [([0, 3, 4, 7, 9]), ([3, 5, 7, 13]), ([1, 5, 3])]
for numbers in data:
    all_prime = True
    for num in numbers:
        if num < 2:
            all_prime = False
            break
        for i in range(2, int(num**0.5) + 1):
            if num % i == 0:
                all_prime = False
                break
    print(f"{numbers} -> {all_prime}")
