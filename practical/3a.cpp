#include <iostream>
using namespace std;

// Class for Rectangle
class Rectangle {
private:
    int length, width;  // Data members

public:
    // Method to set dimensions
    void setDimensions(int l, int w) {
        length = l;
        width = w;
    }

    // Method to calculate area
    int calculateArea() {
        return length * width;
    }
};

int main() {
    Rectangle rect;  // Create object

    int length, width;
    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter width of rectangle: ";
    cin >> width;

    rect.setDimensions(length, width);  // Set values in object

    cout << "Area of rectangle = " << rect.calculateArea() << endl;

    return 0;
}
