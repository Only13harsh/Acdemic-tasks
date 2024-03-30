#include <iostream>
#include <string>

using namespace std;

string getTelecomOperator(const string& phoneNumber) {
    string firstThreeDigits = phoneNumber.substr(0, 3);
    int prefix = stoi(firstThreeDigits);
    if (prefix >= 600 && prefix <= 699) {
        return "Jio";
    } else if (prefix >= 700 && prefix <= 799) {
        return "Airtel";
    } else if (prefix >= 800 && prefix <= 899) {
        return "Vodafone-Idea (VI)";
    } else {
        return "Unknown Operator";
    }
}

int main() {
    string phoneNumber;
    cout << "Enter your 10-digit phone number: ";
    cin >> phoneNumber;

    if (phoneNumber.length() != 10) {
        cout << "Invalid phone number. Please enter a 10-digit number." << endl;
        return 1;
    }

    string operatorName = getTelecomOperator(phoneNumber);
    if (operatorName != "Unknown Operator") {
        cout << "Your operator is: " << operatorName << endl;
    } else {
        cout << "Could not determine operator for this number." << endl;
    }

    return 0;
}
