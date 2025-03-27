#include <iostream>
using namespace std;

class Shape {
    protected:
    double width, height;
public:
    void setParameters(double w, double h) {
        width = w;
        height = h;
    }
};

class Rectangle : public Shape {
public:
    double getArea() {
        return width * height;
    }
};

class Triangle : public Shape {
public:
    double getArea() {
        return 0.5 * width * height;
    }
};

int main() {
    Rectangle R;
    Triangle T;

    R.setParameters(34, 2);
    T.setParameters(5, 4);

    cout << "Area of Rectangle: " << R.getArea() << endl;
    cout << "Area of Triangle: " << T.getArea() << endl;

    return 0;
}
