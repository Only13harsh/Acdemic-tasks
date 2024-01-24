# File: /tmp/6eOqdnnckl.r

count <- 0

while (TRUE) {
  x <- as.numeric(readline(prompt = "Enter a number (enter '0' to stop): "))
  
  if (is.na(x)) {
    cat("Invalid input. Please enter a numeric value.\n")
    next
  }
  
  if (x == 0) {
    break
  }
  
  if (x %% 2 == 0) {
    count = count + 1
  }
}

cat("The number of even numbers is", count, "\n")
