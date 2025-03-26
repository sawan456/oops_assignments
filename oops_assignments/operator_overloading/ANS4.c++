#include<iostream>
#include<cstring>
using namespace std;

class Overload{

    int real, img;

    public:


    Overload(int,int);
    friend bool operator !(const Overload&);

};

Overload::Overload(int r=0,int i=0): real(r),img(i){

}


bool operator !(const Overload & c){

    return (c.real==0 && c.img==0);

}


int main(){


    Overload o1(1,2),o2(0,0);

    cout<<(!o1 ? "Zeros\n" : "Not xero\n");
    cout<<(!o2 ? "zeros\n" : "NOt Zero\n");

    return 0;



}