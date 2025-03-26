// Write a program to swap two numbers using reference variable.

#include<iostream>
using namespace std;

class swapNumbers{
    public:
    void swapFunc(int &num1,int &num2){
        cout<<"Before Swapping (a,b): "<<"("<<num1<<","<<num2<<")"<<endl;
        num1 = num1 + num2;
        num2 = num1 - num2;
        num1 = num1 - num2;
        cout<<"After Swapping (a,b): "<<"("<<num1<<","<<num2<<")"<<endl;
    }
};

int main(){
    int num1,num2;
    cout<<"Enter Numbers: "<<endl;
    cin>>num1>>num2;
    swapNumbers obj;
    obj.swapFunc(num1,num2);
    return 0;
}



