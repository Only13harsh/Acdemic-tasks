printEvenOddNumbers <- function(limit) {
  for (i in 1:limit) {
    if (i %% 2 == 0) {
      cat(i, "is an even number\n")
    } else {
      cat(i, "is an odd  number\n")
    }
  }
}
printEvenOddNumbers(100)
