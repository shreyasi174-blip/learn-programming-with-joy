
#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    void getData()
    {
        cin >> real >> imag;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }

    Complex operator +(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    Complex operator -(Complex c)
    {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }
};

int main()
{
    Complex c1, c2, sum, sub;

    cout << "Enter first complex number: ";
    c1.getData();

    cout << "Enter second complex number: ";
    c2.getData();

    sum = c1 + c2;
    sub = c1 - c2;

    cout << "Addition: ";
    sum.display();

    cout << "Subtraction: ";
    sub.display();

    return 0;
}
