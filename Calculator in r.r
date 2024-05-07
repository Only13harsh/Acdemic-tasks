# Function to add two numbers
add <- function(x, y) {
  return(x + y)
}

# Function to subtract two numbers
subtract <- function(x, y) {
  return(x - y)
}

# Function to multiply two numbers
multiply <- function(x, y) {
  return(x * y)
}

# Function to divide two numbers
divide <- function(x, y) {
  if (y == 0) {
    print("Error: Division by zero")
  } else {
    return(x / y)
  }
}

# Main function to perform calculations
calculate <- function(operation, x, y) {
  switch(operation,
         "add" = add(x, y),
         "subtract" = subtract(x, y),
         "multiply" = multiply(x, y),
         "divide" = divide(x, y),
         stop("Invalid operation"))
}

# Test the calculator
result <- calculate("add", 5, 3)
print(result)  # Output: 8

result <- calculate("subtract", 10, 4)
print(result)  # Output: 6

result <- calculate("multiply", 2, 6)
print(result)  # Output: 12

result <- calculate("divide", 8, 2)
print(result)  # Output: 4

result <- calculate("divide", 10, 0)
# Output: Error: Division by zero
