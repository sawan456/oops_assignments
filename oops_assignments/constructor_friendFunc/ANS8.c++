#include <iostream>
using namespace std;

class Rectangle;
class Square;
class Circle;

void calcutate_Perimeter(Rectangle r);
void calcutate_Perimeter(Square s);
void calcutate_Perimeter(Circle c);


class Rectangle {
private:
    float length, breadth;

public:
    Rectangle(float l, float b) : length(l), breadth(b) {}

    friend void calcutate_Perimeter(Rectangle r);
};


class Square {
private:
    float side;

public:
    Square(float s) : side(s) {}

    friend void calcutate_Perimeter(Square s);
};


class Circle {
private:
    float radius;

public:
    Circle(float r) : radius(r) {}

    friend void calcutate_Perimeter(Circle c);
};


void calcutate_Perimeter(Rectangle r) {
    float perimeter = 2 * (r.length + r.breadth);
    cout << "Perimeter of Rectangle: " << perimeter << endl;
}


void calcutate_Perimeter(Square s) {
    float perimeter = 4 * s.side;
    cout << "Perimeter of Square: " << perimeter << endl;
}


void calcutate_Perimeter(Circle c) {
    float perimeter = 2 * 3.1416 * c.radius;
    cout << "Perimeter of Circle: " << perimeter << endl;
}

int main() {
    float l, b, s, r;
    
    
    cout << "Enter length and breadth of the rectangle: ";
    cin >> l >> b;
    Rectangle rect(l, b);

    cout << "Enter side length of the square: ";
    cin >> s;
    Square sq(s);

    cout << "Enter radius of the circle: ";
    cin >> r;
    Circle cir(r);

    
    calcutate_Perimeter(rect);
    calcutate_Perimeter(sq);
    calcutate_Perimeter(cir);

    return 0;
}
