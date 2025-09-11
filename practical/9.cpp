#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
using namespace std;

int main() {
    // Seed random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    int guess;

    cout << "Guess the number (between 1 and 100):" << endl;

    // Loop until the correct guess
    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the correct number: " 
                 << secretNumber << endl;
            break;  // Exit loop
        }
        else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        }
        else {
            cout << "Too low! Try again." << endl;
        }
    }

    return 0;
}
