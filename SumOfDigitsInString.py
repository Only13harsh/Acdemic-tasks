def sum_of_digits_in_string(input_string):
    digit_sum = 0
    
    for char in input_string:
        if char.isdigit():
            digit_sum += int(char)
    
    return digit_sum

input_str = "Hello123World456"
result = sum_of_digits_in_string(input_str)
print(result)
