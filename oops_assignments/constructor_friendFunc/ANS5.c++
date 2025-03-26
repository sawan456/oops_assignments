#include <iostream>
using namespace std;

class Complex {
private:
    float real, imag;

public:
    void setData(float r, float i) {
        real = r;
        imag = i;
    }

    Complex add(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    void display() {
        cout << "Sum: " << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1, c2, c3;
    float r1, i1, r2, i2;

    cout << "Enter real and imaginary part of first complex number: ";
    cin >> r1 >> i1;
    c1.setData(r1, i1);

    cout << "Enter real and imaginary part of second complex number: ";
    cin >> r2 >> i2;
    c2.setData(r2, i2);

    c3 = c1.add(c2);
    c3.display();

    return 0;
}
