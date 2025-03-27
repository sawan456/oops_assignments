#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    void getPersonDetails() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }
    void showPersonDetails() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : public Person {
protected:
    int rollNumber;
public:
    void getStudentDetails() {
        getPersonDetails();
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
    }
    void showStudentDetails() {
        showPersonDetails();
        cout << "Roll Number: " << rollNumber << endl;
    }
};

class Marks : public Student {
private:
    float marks;
public:
    void getMarksDetails() {
        getStudentDetails();
        cout << "Enter Marks: ";
        cin >> marks;
    }
    void showMarksDetails() {
        showStudentDetails();
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Marks student1;
    student1.getMarksDetails();
    cout << "\n--- Student Details ---\n";
    student1.showMarksDetails();
    return 0;
}
