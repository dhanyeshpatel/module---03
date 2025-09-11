#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    string reversedStr = "";

    // Input string
    cout << "Enter a string: ";
    getline(cin, str);  // Allows spaces in input

    // Reverse the string
    for (int i = str.length() - 1; i >= 0; i--) {
        reversedStr += str[i];
    }

    // Check palindrome
    if (str == reversedStr) {
        cout << "\"" << str << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << str << "\" is not a palindrome." << endl;
    }

    return 0;
}
