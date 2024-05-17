#include <iostream>
#include <string>

using namespace std;

string encode(const string &message, int key) {
    string encodedMessage = message;
    for (char &c : encodedMessage) {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            c = (c - base + key) % 26 + base;
        }
    }
    return encodedMessage;
}

string decode(const string &encodedMessage, int key) {
    string decodedMessage = encodedMessage;
    for (char &c : decodedMessage) {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            c = (c - base - key + 26) % 26 + base;
        }
    }
    return decodedMessage;
}

int main() {
    string message;
    int key;
    char choice;

    cout << "Enter your message: ";
    getline(cin, message);
    cout << "Enter the key (shift amount): ";
    cin >> key;
    
    cout << "Do you want to (e)ncode or (d)ecode the message? ";
    cin >> choice;

    if (choice == 'e' || choice == 'E') {
        string encodedMessage = encode(message, key);
        cout << "Encoded Message: " << encodedMessage << endl;
    } else if (choice == 'd' || choice == 'D') {
        string decodedMessage = decode(message, key);
        cout << "Decoded Message: " << decodedMessage << endl;
    } else {
        cerr << "Invalid choice!" << endl;
    }

    return 0;
}
