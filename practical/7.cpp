#include <iostream>
using namespace std;
int main() 
{
    int a = 10, b = 5;

    // -------- Arithmetic Operators --------
    cout << "Arithmetic Operators:" << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    cout << "a % b = " << (a % b) << endl << endl;

    // -------- Relational Operators --------
    cout << "Relational Operators:" << endl;
    cout << "a == b : " << (a == b) << endl;
    cout << "a != b : " << (a != b) << endl;
    cout << "a > b  : " << (a > b) << endl;
    cout << "a < b  : " << (a < b) << endl;
    cout << "a >= b : " << (a >= b) << endl;
    cout << "a <= b : " << (a <= b) << endl << endl;

    // -------- Logical Operators --------
    bool x = true, y = false;
    cout << "Logical Operators:" << endl;
    cout << "x && y : " << (x && y) << endl;   // AND
    cout << "x || y : " << (x || y) << endl;   // OR
    cout << "!x     : " << (!x) << endl;       // NOT
    cout << "!y     : " << (!y) << endl << endl;

    // -------- Bitwise Operators --------
    cout << "Bitwise Operators:" << endl;
    cout << "a & b  = " << (a & b) << endl;   // AND
    cout << "a | b  = " << (a | b) << endl;   // OR
    cout << "a ^ b  = " << (a ^ b) << endl;   // XOR

    return 0;
}
