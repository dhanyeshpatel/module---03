#include <iostream>
using namespace std;

int main() {
    // ---------- Implicit Conversion ----------
    int intNum = 10;          
    double doubleNum;         

    doubleNum = intNum;       
    cout << "Implicit Conversion:" << endl;
    cout << "Integer value: " << intNum << endl;
    cout << "Converted to double: " << doubleNum << endl << endl;

    // ---------- Explicit Conversion (C-style) ----------
    double price = 99.99;     
    int roundedPrice;        

    roundedPrice = (int) price;  
    cout << "Explicit Conversion (C-style):" << endl;
    cout << "Original double value: " << price << endl;
    cout << "After (int) cast: " << roundedPrice << endl << endl;

    // ---------- Explicit Conversion (static_cast) ----------
    float pi = 3.14159f;     
    int piInt = static_cast<int>(pi);   
    cout << "Explicit Conversion (static_cast):" << endl;
    cout << "Float value: " << pi << endl;
    cout << "Converted to int: " << piInt << endl;

    return 0;
}
