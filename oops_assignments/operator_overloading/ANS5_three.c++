#include <iostream>

using namespace std;

class complex
{

    int real;
    int imag;

public:
    complex() {};
    void add(int ,int );
    friend ostream& operator<<(ostream& , const complex&);
 
};


void complex::add(int r, int i)
{

    this->real = r;
    this->imag = i;
}


ostream& operator<<(ostream &o, const complex &c)
{

    o<<c.real << " + " << c.imag << "i";
    return o;
}

int main()
{

    complex c;
    c.add(55, 41);
    cout<<c;
}