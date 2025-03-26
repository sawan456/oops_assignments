#include<iostream>
#include<string.h>
using namespace std;

class person{
    char Name[20];
    int Age;
    char Address[100];
    public:
    void getData(const char *Name, int Age, const char *Address);
    void showData();
};
void person::getData(const char *Name, int Age, const char *Address){
    strcpy(this->Name,Name);
    this->Age = Age;
    strcpy(this->Address,Address);
}
void person::showData(){
    cout<<"Name: "<<Name<<endl;
    cout<<"Age: "<<Age<<endl;
    cout<<"Address: "<<Address<<endl;
}

int main(){
    person obj;
    obj.getData("Salman", 60, "Galaxy Apartment Bandra Mumbai");
    obj.showData();
    return 0;
}