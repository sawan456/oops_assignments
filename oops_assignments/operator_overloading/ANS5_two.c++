#include<iostream>

using namespace std;

class complex{


int real;
int imag;

public:

complex(){};

friend istream& operator>>(istream& , complex&);
friend ostream& operator<<(ostream& , complex&);

};


istream& operator>>(istream& i, complex& c){


    i>>c.real;
    i>>c.imag;
    return i;

}

ostream& operator<<(ostream& o, complex& c){


    o << c.real << " + " << c.imag << "i";
    return o;

}



int main(){

    complex c;

    cin>>c;
    cout<<c;
    
}