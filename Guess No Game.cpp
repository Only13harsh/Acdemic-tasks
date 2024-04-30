#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(0)); // This will ensure a really randomized number by help of time.
    int num = rand() % 100 + 1; // Generate a number between 1 and 100
    int guess = 0;

    cout << "Guess My Number Game\n\n";

    do {
        cout << "Enter a guess between 1 and 100 : ";
        cin >> guess;

        if(guess > num) {
            cout << "Too high!\n\n";
        } 
        else if(guess < num)
        {
            cout << "Too low!\n\n";
        }
    } while (guess != num);

    cout << "\nCongratulations! You've guessed the number.\n";
    return 0;
}
