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
    float marks;
public:
    void getStudentDetails() {
        getPersonDetails();
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cout << "Enter Marks: ";
        cin >> marks;
    }
    void showStudentDetails() {
        showPersonDetails();
        cout << "Roll Number: " << rollNumber << ", Marks: " << marks << endl;
    }
};

class Sports {
protected:
    float sportsScore;
public:
    void getSportsScore() {
        cout << "Enter Sports Score: ";
        cin >> sportsScore;
    }
    void showSportsScore() {
        cout << "Sports Score: " << sportsScore << endl;
    }
};

class Result : public Student, public Sports {
public:
    void showFinalResult() {
        showStudentDetails();
        showSportsScore();
        cout << "Total Score (Academic + Sports): " << (marks + sportsScore) << endl;
    }
};

int main() {
    Result student1;
    
    cout << "--- Enter Student Details ---" << endl;
    student1.getStudentDetails();
    student1.getSportsScore();

    cout << "\n--- Student Result ---" << endl;
    student1.showFinalResult();
    
    return 0;
}
