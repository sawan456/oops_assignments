#include <iostream>
using namespace std;

class FLOAT {
private:
    float x, y;

public:
    void setData(float , float );
    FLOAT operator +(FLOAT &);
    FLOAT operator -(FLOAT &);
    FLOAT operator *(FLOAT &);
    FLOAT operator /(FLOAT &);
   
    void display();
};


void FLOAT::setData(float r, float i) {
    x = r;
    y = i;
}



FLOAT FLOAT::operator + (FLOAT &c) {
    FLOAT temp;
    temp.x = this->x + c.x;
    temp.y = this->x + c.x;
    return temp;
}

 FLOAT FLOAT::operator - (FLOAT &c) {
    FLOAT temp;
    temp.x = this->x - c.x;
    temp.y = this->x - c.x;
    return temp;
}

FLOAT FLOAT::operator * (FLOAT &c) {
    FLOAT temp;
    temp.x = this->x * c.x;
    temp.y = this->x * c.x;
    return temp;
}
FLOAT FLOAT::operator / (FLOAT &c) {
    FLOAT temp;
    temp.x = this->x / c.x;
    temp.y = this->x / c.x;
    return temp;
}




void FLOAT::display() {
    cout<<x<<" + "<<y<<"i"<<endl;
}

int main() {
    FLOAT f1, f2, f3;
    float r1, i1, r2, i2;

    cout << "Enter real and imaginary part of first complex number: ";
    cin >> r1 >> i1;
    f1.setData(r1, i1);

    cout << "Enter real and imaginary part of second complex number: ";
    cin >> r2 >> i2;
    f2.setData(r2, i2);

    f3 = f1+f2;
    f3.display();
    f3 = f1-f2;
    f3.display();
    f3 = f1*f2;
     f3.display();
    f3 = f1/f2;
    f3.display();

    

    return 0;
}
