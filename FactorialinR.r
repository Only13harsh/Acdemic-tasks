factorial <- function(n) {
  if (n <= 0) {
    return(1)
  }
  return(n * factorial(n - 1))
}
n <- as.integer(readline(prompt = "Enter a number to find the factorial: "))
result_fact <- factorial(n)
cat("The factorial of ", n, "is", result_fact)

n <- as.integer(readline(prompt = "Enter a number to find the factorial: "))
result_fact <- factorial(n)
cat("The factorial of", n, "is", result_fact)
