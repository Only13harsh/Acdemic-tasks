check_even_odd <- function(number) {
  if (number %% 2 == 0) {
    cat("The entered number is even .\n")
  } else {
    cat("The entered number is odd.\n")
  }
}
user_input <- as.numeric(readline("Enter a number: "))
check_even_odd(user_input)
