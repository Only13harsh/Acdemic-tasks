#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(nullptr)));

    // Array of messages
    const char* messages[] = {
        "Hello, World!",
        "Have a great day!",
        "Coding is fun!",
        "Keep learning!",
        "Random message generator!"
    };

    // Calculate the number of messages in the array
    int numMessages = sizeof(messages) / sizeof(messages[0]);

    // Generate a random index to select a message
    int randomIndex = rand() % numMessages;

    // Print the random message
    cout << "Random Message: " << messages[randomIndex] << endl;

    return 0;
}
