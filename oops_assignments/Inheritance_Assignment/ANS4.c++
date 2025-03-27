#include <iostream>
#define M_PI 3.14
using namespace std;

class Shape {
public:
    virtual void area() { 
        cout << "Calculating area of shape..." << endl;
    }
};

class Rectangle : public Shape {
private:
    float length, width;
public:
    Rectangle(float l, float w) : length(l), width(w) {}
    void area() override { 
        cout << "Rectangle Area: " << length * width << endl;
    }
};

class Circle : public Shape {
private:
    float radius;
public:
    Circle(float r) : radius(r) {}
    void area() override {  
        cout << "Circle Area: " << M_PI * radius * radius << endl;
    }
};

class Triangle : public Shape {
private:
    float base, height;
public:
    Triangle(float b, float h) : base(b), height(h) {}
    void area() override {  
        cout << "Triangle Area: " << 0.5 * base * height << endl;
    }
};

int main() {
    Shape *shapePtr; 

 
    Rectangle rect(45, 6);
    shapePtr = &rect;
    shapePtr->area(); 

    Circle circ(5);
    shapePtr = &circ;
    shapePtr->area();

    Triangle tri(87, 2);
    shapePtr = &tri;
    shapePtr->area();

    return 0;
}
