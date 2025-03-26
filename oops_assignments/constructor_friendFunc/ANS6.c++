#include <iostream>
#include <cstring>
using namespace std;

class string1 {

    int length;
    char *buffer;

public:
   
    string1() {
        length = 0;
        buffer = new char[1];
        buffer[0] = '\0';
    }

  
    string1(const char *str) {
        length = strlen(str);
        buffer = new char[length + 1];
        strcpy(buffer, str);
    }

    
    string1(const string1 &s) {
        length = s.length;
        buffer = new char[length + 1];
        strcpy(buffer, s.buffer);
    }

    
    ~string1() {
        delete[] buffer;
    }

    void display() {
        cout << "String: " << buffer << endl;
    }
};

int main() {
    string1 str1("this is a string wow!");
    string1 str2 = str1; 

    str1.display();
    str2.display();

    return 0;
}
