def is_armstrong_number(num):
    # Convert the number to a string to find the number of digits
    num_str = str(num)
    
    # Calculate the number of digits
    num_digits = len(num_str)
    
    # Calculate the sum of each digit raised to the power of the number of digits
    armstrong_sum = sum(int(digit) ** num_digits for digit in num_str)
    
    # Check if the sum is equal to the original number
    return armstrong_sum == num

# Example usage:
number_to_check = int(input("Enter a number: "))
if is_armstrong_number(number_to_check):
    print(f"{number_to_check} is an Armstrong number.")
else:
    print(f"{number_to_check} is not an Armstrong number.")
