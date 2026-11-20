// File 2: question2.cpp
// Check whether an integer is a palindrome.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string number;

    cout << "Enter an integer: ";
    cin >> number;

    // A negative integer is not treated as a palindrome.
    if (!number.empty() && number[0] == '-') {
        cout << number << " is not a palindrome." << endl;
        return 0;
    }

    bool isPalindrome = true;
    int left = 0;
    int right = static_cast<int>(number.length()) - 1;

    // Compare characters from the two ends, moving towards the centre.
    while (left < right) {
        if (number[left] != number[right]) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }

    if (isPalindrome) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }

    return 0;
}
