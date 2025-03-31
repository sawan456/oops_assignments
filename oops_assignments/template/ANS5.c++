// WAP Exception Handling for  
// Divide by zero condition for the division of two numbers.


#include<iostream>
using namespace std;

template<class T>
class Divide{
    public:
    T divideFunc(T a ,T b){
        if(b == 0){
            throw runtime_error("Error! Division by zero is not allowed.");
        }else{
            return a/b;
        }
    }
};
int main(){
    double num1,num2;
    cout<<"Enter NUM1 and NUM2 : ";
    cin>>num1>>num2;
    Divide<double> obj;
    try{
        double output = obj.divideFunc(num1,num2);
        cout<<"Division is: "<<output<<endl;
    }catch(exception e){
        cout<<e.what()<<endl;
    }
    return 0;
};