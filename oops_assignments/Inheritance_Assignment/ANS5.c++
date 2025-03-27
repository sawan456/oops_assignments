#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int rollNo;
    string name, course;

    void input_student() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Course: ";
        getline(cin, course);
    }

    void display_student() {
        cout << "Roll No: " << rollNo << "\nName: " << name << "\nCourse: " << course << endl;
    }
};

class Exam : public Student {
public:
    float mark1, mark2, mark3;

    void input_marks() {
        cout << "Enter marks for 3 subjects: ";
        cin >> mark1 >> mark2 >> mark3;
    }

    void display_result() {
        display_student();
        float total = mark1 + mark2 + mark3;
        float avg = total / 3;
        cout << "Total Marks: " << total << "\nAverage: " << avg << "\n\n";
    }
};

int main() {
    Exam students[5];

    for (int i = 0; i < 5; i++) {
        cout << "\nEnter details for Student " << i + 1 << ":\n";
        students[i].input_student();
        students[i].input_marks();
    }

    cout << "\nDisplaying Results of 5 Students:\n";
    for (int i = 0; i < 5; i++) {
        students[i].display_result();
    }

    return 0;
}
