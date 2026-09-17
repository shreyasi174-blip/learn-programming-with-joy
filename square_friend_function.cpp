#include<iostream>
using namespace std;
class SquareDetails;

class square {
    float arm;
    float area;
    float circumference; 

public:
    square(float len) {
        arm = len;
        area = len * len;
        circumference = 4 * len;
    }
    friend void display(square obj) {
        cout << "Area of the square (via Friend Function): " << obj.area << endl;
    }

    friend class SquareDetails;
};
class SquareDetails {
public:
    void displayCircumference(square obj) {
        cout << "Circumference of the square (via Friend Class): " << obj.circumference << endl;
    }
};

int main() {
    square s1(2.0);
    display(s1);
    SquareDetails details;
    details.displayCircumference(s1);
    
    return 0;
}
