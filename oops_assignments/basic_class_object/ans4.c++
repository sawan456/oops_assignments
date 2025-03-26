#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int admno;
    string name;
    int marks[3]; 

public:
    void inputData();
    int calculateMarks();
    void display();
};

void Student::inputData() {
    cout << "Enter Admission Number: ";
    cin >> admno;
    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, name);


    for (int i = 1; i <= 3; i++) {
        cout<<"Enter Marks for "<<i<<" subject: "<<endl;
        cin >> marks[i];
    }
}

int Student::calculateMarks() {
    int total = 0;
    for (int i = 1; i <= 3; i++) {
        total += marks[i];
    }
    return total;
}


void Student::display() {
    cout << "\n==========Student Details:==========\n";
    cout << "Admission No: " << admno << endl;
    cout << "Name: " << name << endl;
    cout << "Total Marks: " << calculateMarks() << endl;
}

int main() {
    Student obj;
    obj.inputData();  
    obj.display();    
    return 0;
}
