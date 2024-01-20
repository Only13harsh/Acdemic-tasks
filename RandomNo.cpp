#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(nullptr)));

    // Generate and print a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    cout << "Random Number: " << randomNumber << endl;

    return 0;
}
