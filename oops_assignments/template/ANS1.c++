// WAP to swap two numbers using template function.
#include<iostream>
using namespace std;

template <class T>
void swapFunc(T &num1,T &num2){
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
}

int main(){
    int num1,num2;
    cin>>num1>>num2;
    cout<<"Before Swapping: "<<num1<<" "<<num2<<endl;
    swapFunc(num1,num2);
    cout<<"After Swapping: "<<num1<<" "<<num2<<endl;
    return 0;
};