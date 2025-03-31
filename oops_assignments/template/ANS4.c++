// WAP Simple calculator using Class template.

#include<iostream>
using namespace std;

template<class T>
class calculator{
    public:
    calculator(T num1 , T num2,char btn){
        btn = toupper(btn);
        switch(btn){
            case 'A':
            cout<<"Addition: "<<num1+num2<<endl;
            break;
            case 'S':
            cout<<"Substraction: "<<num1-num2<<endl;
            break;
            case 'M':
            cout<<"Multiplication: "<<num1*num2<<endl;
            break;
            case 'D':
            if (num2 == 0) {
                cout << "Error! Division by zero is not allowed.\n";
            } else {
                cout << "Division: " << num1 / num2 << endl;
            }
            break;
            default:
            cout<<"Invalid choice"<<endl;
        }
    }
};

int main(){
    double num1 ,num2;
    cout<<"Enter NUM1 and NUM2 : ";
    cin>>num1>>num2;
    char btn;
    cout<<"Enter your choice (A, S, M, D): ";
    cin>>btn;
    calculator<double> obj(num1,num2,btn);
    
    return 0;
};