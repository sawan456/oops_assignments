#include<iostream>
using namespace std;

class Box{

    double width;

    public:
    Box(double wide){
        width = wide;
    }

    friend void printWidth(Box);
};

void printWidth(Box obj){
    
cout<<obj.width;

}


int main(){
    Box obj(97.3821);

    printWidth(obj);

}