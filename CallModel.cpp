#include <iostream>
#include <string>

using namespace std;

class Phone {
public:
    void dial(const string& phoneNumber) {
        cout << "Dialing  " << phoneNumber << "...\n";
        // In a real application, you would interact with phone hardware or an API here.
    }

    void receiveCall(const string& callerName) {
        cout << "Incoming call from " << callerName << ". Do you want to answer? (y/n): ";
        char response;
        cin >> response;

        if (response == 'y' || response == 'Y') {
            cout << "Call answered. Hello, " << callerName << "!\n";
            // In a real application, you would start the call handling process here.
        } else {
            cout << "Call ignored.\n";
        }
    }
};

int main() {
    Phone myPhone;

    cout << "1. Dial a number\n2. Receive a call\n";
    int choice;
    cin >> choice;

    switch (choice) {
        case 1: {
            string phoneNumber;
            cout << "Enter phone number to dial: ";
            cin >> phoneNumber;
            myPhone.dial(phoneNumber);
            break;
        }
        case 2: {
            string callerName;
            cout << "Enter caller name: ";
            cin >> callerName;
            myPhone.receiveCall(callerName);
            break;
        }
        default:
            cout << "Invalid choice.\n";
    }

    return 0;
}
