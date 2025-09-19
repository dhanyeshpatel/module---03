#include <iostream>
using namespace std;
int globalVar = 100;
void showVariables() {
    int localVar = 20; 

    cout << "Inside showVariables():" << endl;
    cout << "Global variable = " << globalVar << endl;
    cout << "Local variable = " << localVar << endl << endl;
}

int main() {
    int localVar = 10; 

    cout << "Inside main():" << endl;
    cout << "Global variable = " << globalVar << endl;
    cout << "Local variable (main) = " << localVar << endl << endl;

    
    showVariables();
    globalVar = 200;
    cout << "After modifying globalVar in main:" << endl;
    cout << "Global variable = " << globalVar << endl;

    return 0;
}
