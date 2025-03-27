#include <iostream>
#include <string>
using namespace std;

class University {
protected:
    string universityName, department, assignedPerson;

public:
    void input_university() {
        cout << "Enter University Name: ";
        getline(cin, universityName);
        cout << "Enter Department: ";
        getline(cin, department);
        cout << "Enter Assigned Person: ";
        getline(cin, assignedPerson);
    }

    void display_university() {
        cout << "\nUniversity Name: " << universityName;
        cout << "\nDepartment: " << department;
        cout << "\nAssigned Person: " << assignedPerson;
    }
};

class Company {
protected:
    string companyName;
    int numEngineers;
    double amountInvested;

public:
    void input_company() {
        cout << "Enter Company Name: ";
        getline(cin, companyName);
        cout << "Enter Number of Engineers Assigned: ";
        cin >> numEngineers;
        cout << "Enter Amount Invested (Not displayed in final output): ";
        cin >> amountInvested;
        cin.ignore(); 
    }

    void display_company() {
        cout << "\nCompany Name: " << companyName;
        cout << "\nNumber of Engineers Assigned: " << numEngineers;
        cout << "\nAmount Invested: " << amountInvested; 
    }
};


class Project : public University, public Company {
private:
    string projectType;
    int duration;
    double amountGranted;

public:
    void input_project() {
        input_university(); 
        input_company();   
        cout << "Enter Project Type: ";
        getline(cin, projectType);
        cout << "Enter Duration (in months): ";
        cin >> duration;
        cout << "Enter Amount Granted: ";
        cin >> amountGranted;
    }

    void display_project() {
        display_university();
        cout << "\nCompany Name: " << companyName; 
        cout << "\nNumber of Engineers Assigned: " << numEngineers; 
        cout << "\nProject Type: " << projectType;
        cout << "\nDuration (Months): " << duration;
        cout << "\nAmount Granted: " << amountGranted;
    }
};

int main() {
    Project p;
    cout << "Enter Project Details:\n";
    p.input_project();

    cout << "\n\nDisplaying Project Information (excluding amount invested by company):\n";
    p.display_project();

    return 0;
}
