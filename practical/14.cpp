#include <iostream>
using namespace std;

// Global variable (accessible everywhere)
int globalVar = 100;

// Function to demonstrate scope
void showVariables() {
    int localVar = 20; // Local variable (only inside this function)

    cout << "Inside showVariables():" << endl;
    cout << "Global variable = " << globalVar << endl;
    cout << "Local variable = " << localVar << endl << endl;
}

int main() {
    int localVar = 10; // Local variable in main

    cout << "Inside main():" << endl;
    cout << "Global variable = " << globalVar << endl;
    cout << "Local variable (main) = " << localVar << endl << endl;

    // Call function
    showVariables();

    // Changing global variable
    globalVar = 200;
    cout << "After modifying globalVar in main:" << endl;
    cout << "Global variable = " << globalVar << endl;

    return 0;
}
