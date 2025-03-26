#include<iostream>
#include<string.h>
using namespace std;

class Employee {
    int empno;
    int rank;
    char department[20];
    double salary;
    public:
    void getData(int empno ,int rank, const char *department, double salary);
    void showData();
};
void Employee::getData(int empno ,int rank, const char *department, double salary){
    this->empno = empno;
    this->rank = rank;
    strcpy(this->department,department);
    this->salary = salary;
}
void Employee::showData(){
    cout<<"Employee Number: "<<empno<<endl;
    cout<<"Rank: "<<rank<<endl;
    cout<<"Department: "<<department<<endl;
    cout<<"Salary: "<<salary<<endl;
    cout<<"================================================="<<endl;
}

int main(){
    Employee employee1 , employee2;
    employee1.getData(1, 1, "IT", 100000);
    employee2.getData(2, 2, "HR", 50000);
    
    employee1.showData();
    employee2.showData();
    return 0;
}