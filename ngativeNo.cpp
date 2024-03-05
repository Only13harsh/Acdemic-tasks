#include <iostream>

using namespace std;

// This function calculates the factorial of a number
int factorial(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}

int main() {
  int num;

  cout << "Enter a non-negative integer: ";
  cin >> num;

  // Validate user input (optional)
  if (num < 0) {
    cout << "Error: Factorial is not defined for negative numbers." << endl;
    return 1; // Indicate error
  }

  int result = factorial(num);
  cout << "The factorial of " << num << " is " << result << endl;

  return 0; // Indicate successful execution
}
