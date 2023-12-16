#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(const string& word) {
    int left = 0;
    int right = word.length() - 1;
    while (left < right) {
        if (word[left] != word[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string words[] = {"radar", "hello", "level", "world", "deified"};

    for (const auto& word : words) {
        if (isPalindrome(word)) {
            cout << word << " is a palindrome." << endl;
        }
    }

    return 0;
}
