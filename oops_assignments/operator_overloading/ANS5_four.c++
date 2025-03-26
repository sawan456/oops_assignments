#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    void setData(int , int );
    Complex operator -(Complex &);
    void display();
};


void Complex::setData(int r, int i) {
    real = r;
    imag = i;
}

 Complex Complex::operator - (Complex &c) {
    Complex temp;
    temp.real = this->real - c.real;
    temp.imag = this->imag - c.imag;
    return temp;
}


void Complex::display() {
    cout<< real << " + " << imag << "i" << endl;
}

int main() {
    Complex c1, c2, c3;
    int r1, i1, r2, i2;

    cout << "Enter real and imaginary part of first complex number: ";
    cin >> r1 >> i1;
    c1.setData(r1, i1);

    cout << "Enter real and imaginary part of second complex number: ";
    cin >> r2 >> i2;
    c2.setData(r2, i2);

    c3 = c1-c2;
    c3.display();

    return 0;
}
