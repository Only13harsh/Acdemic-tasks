#include <iostream>
#include <string>

using namespace std;

string generateApplication(bool isIll, bool isAttendingWedding) {
    string reason;
    if (isIll) {
        reason = "due to illness.";
    } else if (isAttendingWedding) {
        reason = "as I have to attend a wedding.";
    } else {
        reason = "for personal reasons.";
    }

    return "Subject: Leave Application\n\nDear [Recipient Name],\n\nI am writing to inform you that I will not be able to attend classes on [Date] " + reason + "\n\nSincerely,\n[Your Name]";
}

int main() {
    bool isIll = false; // Change to true if the student is ill
    bool isAttendingWedding = true; // Change to true if the student is attending a wedding

    string application = generateApplication(isIll, isAttendingWedding);
    cout << application << endl;

    return 0;
}
