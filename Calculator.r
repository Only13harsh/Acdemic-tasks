calculator <- function() {
  repeat {
    # Display menu
    cat("Choose an operation:\n")
    cat("1. Addition\n")
    cat("2. Subtraction\n")
    cat("3. Multiplication\n")
    cat("4. Division\n")
    cat("5. Exit\n")
    
    # Take user input
    choice <- as.integer(readline("Enter your choice: "))
    
    # Perform operation based on user choice
    if (choice == 5) {
      cat("Exiting calculator. Goodbye!\n")
      break
    } else if (choice >= 1 && choice <= 4) {
      num1 <- as.numeric(readline("Enter first number: "))
      num2 <- as.numeric(readline("Enter second number: "))
      
      if (choice == 1) {
        result <- num1 + num2
        cat("Result: ", result, "\n")
      } else if (choice == 2) {
        result <- num1 - num2
        cat("Result: ", result, "\n")
      } else if (choice == 3) {
        result <- num1 * num2
        cat("Result: ", result, "\n")
      } else if (choice == 4) {
        if (num2 != 0) {
          result <- num1 / num2
          cat("Result: ", result, "\n")
        } else {
          cat("Error: Division by zero\n")
        }
      }
    } else {
      cat("Invalid choice. Please enter a number between 1 and 5.\n")
    }
  }
}

# Call the calculator function
calculator()
