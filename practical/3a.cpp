#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;  
public:
    void setDimensions(int l, int w) {
        length = l;
        width = w;
    }
    int calculateArea() {
        return length * width;
    }
};

int main() {
    Rectangle rect;  
    int length, width;
    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter width of rectangle: ";
    cin >> width;

    rect.setDimensions(length, width); 

    cout << "Area of rectangle = " << rect.calculateArea() << endl;

    return 0;
}
